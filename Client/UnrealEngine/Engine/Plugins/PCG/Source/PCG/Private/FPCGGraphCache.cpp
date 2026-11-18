// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 20

// FPCGGraphCache @ 149ca2cc0

FPCGGraphCache * __thiscall FPCGGraphCache::FPCGGraphCache(FPCGGraphCache *this,bool param_1)

{
  bool bVar1;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  this->_padding_ = (longlong)&_vftable__for__IPCGGraphCache__;
  *(undefined8 *)&(this->CacheData).LookupSet.Elements = 0;
  *(undefined8 *)&(this->CacheData).LookupSet.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CacheData).LookupSet.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CacheData).LookupSet.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CacheData).LookupSet.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CacheData).LookupSet.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CacheData).LookupSet.Elements.field_0x34 = 0;
  (this->CacheData).LookupSet.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CacheData).LookupSet.HashSize = 0;
  (this->CacheData).LeastRecent = (FCacheEntry *)0x0;
  (this->CacheData).MostRecent = (FCacheEntry *)0x0;
  (this->CacheData).MaxNumElements = 0;
  *(undefined8 *)&this->ElementToCacheEntryKeys = 0;
  *(undefined8 *)&(this->ElementToCacheEntryKeys).field_0x8 = 0;
  *(undefined8 *)&(this->ElementToCacheEntryKeys).field_0x20 = 0;
  *(undefined4 *)&(this->ElementToCacheEntryKeys).field_0x28 = 0;
  *(undefined4 *)&(this->ElementToCacheEntryKeys).field_0x2c = 0x80;
  *(undefined4 *)&(this->ElementToCacheEntryKeys).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ElementToCacheEntryKeys).field_0x34 = 0;
  *(undefined8 *)&(this->ElementToCacheEntryKeys).field_0x40 = 0;
  *(undefined4 *)&(this->ElementToCacheEntryKeys).field_0x48 = 0;
  *(undefined8 *)&this->MemoryRecords = 0;
  *(undefined8 *)&(this->MemoryRecords).field_0x8 = 0;
  *(undefined8 *)&(this->MemoryRecords).field_0x20 = 0;
  *(undefined4 *)&(this->MemoryRecords).field_0x28 = 0;
  *(undefined4 *)&(this->MemoryRecords).field_0x2c = 0x80;
  *(undefined4 *)&(this->MemoryRecords).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MemoryRecords).field_0x34 = 0;
  *(undefined8 *)&(this->MemoryRecords).field_0x40 = 0;
  *(undefined4 *)&(this->MemoryRecords).field_0x48 = 0;
  this->TotalMemoryUsed = 0;
  this->bIsGameWorld = param_1;
  (this->CacheLock).bFlag = (atomic<bool>)0x0;
  bVar1 = IsEnabled(this);
  TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::Empty
            (&this->CacheData,(uint)bVar1 << 0x10);
  return this;
}

// ~FPCGGraphCache @ 149ca6040

void __thiscall FPCGGraphCache::~FPCGGraphCache(FPCGGraphCache *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  this->_padding_ = (longlong)&_vftable__for__IPCGGraphCache__;
  ClearCache(this);
  *(undefined4 *)&(this->MemoryRecords).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MemoryRecords).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FCachedMemoryRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FCachedMemoryRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FCachedMemoryRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MemoryRecords);
  *(undefined4 *)&(this->ElementToCacheEntryKeys).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ElementToCacheEntryKeys).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ElementToCacheEntryKeys);
  TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::Empty
            (&this->CacheData,0);
  (this->CacheData).LookupSet.HashSize = 0;
  FVar2 = (this->CacheData).LookupSet.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CacheData);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// operator() @ 149ca7cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPCGGraphCache::AddDataToAccountedMemory'::__l9::<lambda_1>::operator()
          (void *this,UPCGData *param_1)

{
  longlong lVar1;
  FCachedMemoryRecord *pFVar2;
  ulong64 uVar3;
  undefined1 auStack_158 [32];
  TKeyInitializer<unsigned___int64_const_&> local_138;
  ulong64 *local_130;
  undefined1 local_128 [72];
  void *local_e0;
  undefined4 local_d8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_d0;
  void *local_90;
  undefined4 local_88;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_80;
  void *local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  if (param_1 != (UPCGData *)0x0) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
    pFVar2 = TMapBase<unsigned___int64,FCachedMemoryRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FCachedMemoryRecord,0>_>
             ::Find((TMapBase<unsigned___int64,FCachedMemoryRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FCachedMemoryRecord,0>_>
                     *)(*(longlong *)this + 0xd0),param_1->UID);
    if (pFVar2 == (FCachedMemoryRecord *)0x0) {
      FResourceSizeEx::FResourceSizeEx((FResourceSizeEx *)local_128,Exclusive);
      (**(code **)(param_1->_padding_ + 400))(param_1,local_128);
      uVar3 = FResourceSizeEx::GetDedicatedSystemMemoryBytes((FResourceSizeEx *)local_128);
      lVar1 = *(longlong *)this;
      local_130 = &param_1->UID;
      TSet<TTuple<unsigned___int64,FCachedMemoryRecord>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCachedMemoryRecord,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
                ((TSet<TTuple<unsigned___int64,FCachedMemoryRecord>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCachedMemoryRecord,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0xd0),&local_138,(bool *)&local_130);
      lVar1 = *(longlong *)(lVar1 + 0xd0);
      *(ulong64 *)((longlong)(int)local_138.Key * 0x20 + 0x10 + lVar1) = uVar3;
      *(undefined4 *)((longlong)(int)local_138.Key * 0x20 + 8 + lVar1) = 1;
      *(longlong *)(*(longlong *)this + 0x120) = *(longlong *)(*(longlong *)this + 0x120) + uVar3;
      local_38 = 0;
      if (local_40 != (void *)0x0) {
        FMemory::Free(local_40);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_80);
      local_88 = 0;
      if (local_90 != (void *)0x0) {
        FMemory::Free(local_90);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_d0);
      local_d8 = 0;
      if (local_e0 != (void *)0x0) {
        FMemory::Free(local_e0);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_128 + 8));
    }
    else {
      pFVar2->InstanceCount = pFVar2->InstanceCount + 1;
    }
  }
  return;
}

// operator() @ 149ca7e30

void __thiscall
`FPCGGraphCache::RemoveFromMemoryTotal'::__l9::<lambda_1>::operator()(void *this,UPCGData *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  FCachedMemoryRecord *pFVar4;
  longlong lVar5;
  
  if ((param_1 == (UPCGData *)0x0) ||
     (pFVar4 = TMapBase<unsigned___int64,FCachedMemoryRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FCachedMemoryRecord,0>_>
               ::Find((TMapBase<unsigned___int64,FCachedMemoryRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FCachedMemoryRecord,0>_>
                       *)(*(longlong *)this + 0xd0),param_1->UID),
     pFVar4 == (FCachedMemoryRecord *)0x0)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3506406219508089253>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCache.cpp"
                       ,0x1a5,"Record");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pFVar4->InstanceCount == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3506406219508089256>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCache.cpp"
                       ,0x1a8,"Record->InstanceCount > 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pFVar4->InstanceCount = pFVar4->InstanceCount - 1;
  }
  if (pFVar4->InstanceCount != 0) {
    return;
  }
  uVar1 = *(ulonglong *)(*(longlong *)this + 0x120);
  lVar5 = uVar1 - pFVar4->MemoryPerInstance;
  if (uVar1 < pFVar4->MemoryPerInstance) {
    lVar5 = 0;
  }
  *(longlong *)(*(longlong *)this + 0x120) = lVar5;
  TSet<TTuple<unsigned___int64,FCachedMemoryRecord>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCachedMemoryRecord,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<unsigned___int64,FCachedMemoryRecord>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCachedMemoryRecord,0>,FDefaultSetAllocator>
            *)(*(longlong *)this + 0xd0),param_1->UID);
  return;
}

// AddDataToAccountedMemory @ 149ca9a80

void __thiscall
FPCGGraphCache::AddDataToAccountedMemory(FPCGGraphCache *this,FPCGDataCollection *param_1)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  FPCGGraphCache *local_res18 [2];
  code *local_38;
  FPCGGraphCache **local_30;
  
  iVar1 = (param_1->TaggedData).ArrayNum;
  pFVar3 = (param_1->TaggedData).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((param_1->TaggedData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar3 == pFVar4) break;
    plVar2 = *(longlong **)pFVar3;
    if (plVar2 != (longlong *)0x0) {
      local_30 = local_res18;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FPCGGraphCache::AddDataToAccountedMemory'::__l9::<lambda_1>,void,UPCGData_const_*>
                 ::Call;
      local_res18[0] = this;
      (**(code **)(*plVar2 + 0x2c0))(plVar2,&local_38);
    }
    pFVar3 = pFVar3 + 0x78;
  }
  return;
}

// AddReferencedObjects @ 149caae30

void __thiscall
FPCGGraphCache::AddReferencedObjects(FPCGGraphCache *this,FReferenceCollector *param_1)

{
  FSpinLock *pFVar1;
  atomic<bool> aVar2;
  FCacheEntry *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId279,"FPCGGraphCache::AddReferencedObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCache.cpp"
               ,0x117);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId279);
  }
  pFVar1 = &this->CacheLock;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  aVar2 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar2 != (atomic<bool>)0x0) {
    aVar2 = pFVar1->bFlag;
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = pFVar1->bFlag;
    }
    LOCK();
    aVar2 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  for (pFVar3 = (this->CacheData).MostRecent; pFVar3 != (FCacheEntry *)0x0;
      pFVar3 = pFVar3->LessRecent) {
    FPCGDataCollection::AddReferences(&pFVar3->Value,param_1);
  }
  if (pFVar1 != (FSpinLock *)0x0) {
    pFVar1->bFlag = (atomic<bool>)0x0;
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AddToCacheInternal @ 149cac040

void __thiscall
FPCGGraphCache::AddToCacheInternal
          (FPCGGraphCache *this,FPCGCacheEntryKey *param_1,FPCGDataCollection *param_2,bool param_3)

{
  int iVar1;
  FCacheEntry *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator> *this_00;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  IPCGElement *local_res10;
  undefined1 local_res20 [8];
  FPCGGraphCache *local_58;
  code *local_50;
  FPCGGraphCache **local_48;
  FPCGCacheEntryKey local_40;
  
  if (*(int *)&(this->CacheData).LookupSet.Elements.field_0x8 -
      *(int *)&(this->CacheData).LookupSet.Elements.field_0x34 == (this->CacheData).MaxNumElements)
  {
    if (((this->CacheData).LeastRecent == (FCacheEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("LeastRecent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LruCache.h"
                           ,0x26e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->CacheData).LeastRecent;
    local_40.Element = (pFVar2->Key).Element;
    local_40.CrcHash = (pFVar2->Key).CrcHash;
    local_40.Hash = (pFVar2->Key).Hash;
    RemoveFromCacheInternal(this,&local_40);
  }
  TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::Add
            (&this->CacheData,param_1,param_2);
  local_res10 = param_1->Element;
  uVar6 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  this_00 = TMapBase<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>,0>_>
            ::FindOrAddImpl<IPCGElement_const_*>
                      ((TMapBase<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>,0>_>
                        *)&this->ElementToCacheEntryKeys,uVar6 >> 0x10 ^ uVar6,&local_res10);
  TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>::
  Emplace<FPCGCacheEntryKey_const_&>(this_00,(FPCGCacheEntryKey *)local_res8,(bool *)param_1);
  if (param_3) {
    iVar1 = (param_2->TaggedData).ArrayNum;
    pFVar7 = (param_2->TaggedData).AllocatorInstance.Data;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x78;
    while( true ) {
      if ((param_2->TaggedData).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar7 == pFVar8) break;
      plVar3 = *(longlong **)pFVar7;
      if (plVar3 != (longlong *)0x0) {
        local_48 = &local_58;
        local_50 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FPCGGraphCache::AddDataToAccountedMemory'::__l9::<lambda_1>,void,UPCGData_const_*>
                   ::Call;
        local_58 = this;
        (**(code **)(*plVar3 + 0x2c0))(plVar3,&local_50);
      }
      pFVar7 = pFVar7 + 0x78;
    }
  }
  ValidateElementToCacheEntryKeys(this);
  return;
}

// ClearCache @ 149cb4d10

void __thiscall FPCGGraphCache::ClearCache(FPCGGraphCache *this)

{
  FSpinLock *pFVar1;
  atomic<bool> aVar2;
  code *pcVar3;
  bool bVar4;
  
  pFVar1 = &this->CacheLock;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LOCK();
  aVar2 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar2 != (atomic<bool>)0x0) {
    aVar2 = pFVar1->bFlag;
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = pFVar1->bFlag;
    }
    LOCK();
    aVar2 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  ClearCacheInternal(this,(this->CacheData).MaxNumElements,true);
  if (pFVar1 != (FSpinLock *)0x0) {
    pFVar1->bFlag = (atomic<bool>)0x0;
  }
  return;
}

// ClearCacheInternal @ 149cb4e90

void __thiscall FPCGGraphCache::ClearCacheInternal(FPCGGraphCache *this,int param_1,bool param_2)

{
  undefined1 *puVar1;
  TMap<unsigned___int64,FCachedMemoryRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FCachedMemoryRecord,0>_>
  *this_00;
  TMap<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>,0>_>
  *this_01;
  int iVar2;
  bool bVar3;
  
  if (param_2) {
    this_00 = &this->MemoryRecords;
    bVar3 = 1 < *(int *)&(this->MemoryRecords).field_0x48;
    if (!bVar3) {
      TSet<TTuple<unsigned___int64,FCachedMemoryRecord>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCachedMemoryRecord,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<unsigned___int64,FCachedMemoryRecord>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCachedMemoryRecord,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    puVar1 = &(this->MemoryRecords).field_0xc;
    *(undefined4 *)&(this->MemoryRecords).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->MemoryRecords).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->MemoryRecords).field_0x34 = 0;
    iVar2 = *(int *)&(this->MemoryRecords).field_0x2c;
    *(undefined4 *)&(this->MemoryRecords).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->MemoryRecords).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MemoryRecords).field_0x10,0);
    }
    if (bVar3) {
      *(undefined4 *)&(this->MemoryRecords).field_0x48 = 1;
      TSet<TTuple<unsigned___int64,FCachedMemoryRecord>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCachedMemoryRecord,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<unsigned___int64,FCachedMemoryRecord>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCachedMemoryRecord,0>,FDefaultSetAllocator>
                *)this_00);
    }
    this->TotalMemoryUsed = 0;
  }
  TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::Empty
            (&this->CacheData,param_1);
  this_01 = &this->ElementToCacheEntryKeys;
  bVar3 = *(int *)&(this->ElementToCacheEntryKeys).field_0x48 < 2;
  if (bVar3) {
    TSet<TTuple<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->ElementToCacheEntryKeys).field_0x8);
  puVar1 = &(this->ElementToCacheEntryKeys).field_0xc;
  *(undefined4 *)&(this->ElementToCacheEntryKeys).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ElementToCacheEntryKeys).field_0x34 = 0;
  *(undefined4 *)&(this->ElementToCacheEntryKeys).field_0x30 = 0xffffffff;
  iVar2 = *(int *)&(this->ElementToCacheEntryKeys).field_0x2c;
  *(undefined4 *)&(this->ElementToCacheEntryKeys).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ElementToCacheEntryKeys).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ElementToCacheEntryKeys).field_0x10,0
              );
  }
  if (bVar3) {
    return;
  }
  *(undefined4 *)&(this->ElementToCacheEntryKeys).field_0x48 = 1;
  TSet<TTuple<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Rehash((TSet<TTuple<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            *)this_01);
  return;
}

// EnforceMemoryBudget @ 149cbeeb0

bool __thiscall FPCGGraphCache::EnforceMemoryBudget(FPCGGraphCache *this)

{
  FSpinLock *pFVar1;
  atomic<bool> aVar2;
  ulonglong uVar3;
  FCacheEntry *pFVar4;
  code *pcVar5;
  TConsoleVariableData<float> *pTVar6;
  TConsoleVariableData<int> *pTVar7;
  TConsoleVariableData<int> *pTVar8;
  TConsoleVariableData<bool> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  float fVar15;
  FPCGCacheEntryKey local_28;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId201,"FPCGGraphCache::FPCGGraphCache::EnforceMemoryBudget",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCache.cpp"
               ,0xc9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId201);
  }
  bVar10 = IsEnabled(this);
  pTVar9 = CVarCacheMemoryBudgetEnabled.Ref;
  if (bVar10) {
    bVar10 = IsInParallelGameThread();
    if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
      lVar12 = 0;
    }
    else {
      lVar12 = 1;
    }
    pTVar8 = CVarCacheMemoryBudgetRuntimeMB.Ref;
    pTVar7 = CVarCacheMemoryBudgetEditorMB.Ref;
    if (pTVar9->ShadowedValue[lVar12] != false) {
      if (this->bIsGameWorld == false) {
        bVar10 = IsInParallelGameThread();
        if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
          lVar12 = 0;
        }
        else {
          lVar12 = 4;
        }
        iVar13 = *(int *)((longlong)pTVar7->ShadowedValue + lVar12);
      }
      else {
        bVar10 = IsInParallelGameThread();
        if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
          iVar13 = pTVar8->ShadowedValue[0];
        }
        else {
          iVar13 = pTVar8->ShadowedValue[1];
        }
      }
      lVar12 = 4;
      if ((ulonglong)((longlong)iVar13 * 0x100000) < this->TotalMemoryUsed) {
        pFVar1 = &this->CacheLock;
        if ((pFVar1 == (FSpinLock *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mutex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                ,0x1b,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        LOCK();
        aVar2 = pFVar1->bFlag;
        pFVar1->bFlag = (atomic<bool>)0x1;
        UNLOCK();
        pTVar6 = CVarCacheMemoryCleanupRatio.Ref;
        while (CVarCacheMemoryCleanupRatio.Ref = pTVar6, aVar2 != (atomic<bool>)0x0) {
          aVar2 = pFVar1->bFlag;
          while (aVar2 != (atomic<bool>)0x0) {
            aVar2 = pFVar1->bFlag;
          }
          LOCK();
          aVar2 = pFVar1->bFlag;
          pFVar1->bFlag = (atomic<bool>)0x1;
          UNLOCK();
          pTVar6 = CVarCacheMemoryCleanupRatio.Ref;
        }
        bVar10 = IsInParallelGameThread();
        if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
          lVar12 = 0;
        }
        fVar15 = *(float *)((longlong)pTVar6->ShadowedValue + lVar12);
        if (__real_3f800000 <= fVar15) {
          fVar15 = __real_3f800000;
        }
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        fVar15 = fVar15 * (float)(ulonglong)((longlong)iVar13 * 0x100000);
        lVar12 = 0;
        if ((__real_5f000000 <= fVar15) &&
           (fVar15 = fVar15 - __real_5f000000, fVar15 < __real_5f000000)) {
          lVar12 = -0x8000000000000000;
        }
        uVar3 = this->TotalMemoryUsed;
        while (((ulonglong)((longlong)fVar15 + lVar12) < uVar3 &&
               (0 < *(int *)&(this->CacheData).LookupSet.Elements.field_0x8 -
                    *(int *)&(this->CacheData).LookupSet.Elements.field_0x34))) {
          if (((this->CacheData).LeastRecent == (FCacheEntry *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("LeastRecent",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LruCache.h"
                                  ,0x26e,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
          pFVar4 = (this->CacheData).LeastRecent;
          local_28.Element = (pFVar4->Key).Element;
          local_28.CrcHash = (pFVar4->Key).CrcHash;
          local_28.Hash = (pFVar4->Key).Hash;
          RemoveFromCacheInternal(this,&local_28);
          uVar3 = this->TotalMemoryUsed;
        }
        ValidateElementToCacheEntryKeys(this);
        if (pFVar1 != (FSpinLock *)0x0) {
          pFVar1->bFlag = (atomic<bool>)0x0;
        }
        bVar10 = true;
        goto LAB_149cbf130;
      }
    }
  }
  bVar10 = false;
LAB_149cbf130:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar10;
}

// GetFromCache @ 149cc7d70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPCGGraphCache::GetFromCache
          (FPCGGraphCache *this,FPCGGetFromCacheParams *param_1,FPCGDataCollection *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  UPCGNode *this_00;
  IPCGElement *pIVar3;
  IPCGGraphExecutionSource *pIVar4;
  FCacheEntry *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  TConsoleVariableData<bool> *pTVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  longlong lVar12;
  FText *pFVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  int iVar16;
  bool bVar17;
  FPCGCacheEntryKey local_88;
  void *local_78 [2];
  FText local_68;
  void *local_58 [2];
  FText local_48;
  
  bVar9 = IsEnabled((FPCGGraphCache *)&this[-1].TotalMemoryUsed);
  pTVar8 = CVarCacheDebugging.Ref;
  if (bVar9) {
    this_00 = param_1->Node;
    pIVar3 = param_1->Element;
    pIVar4 = param_1->ExecutionSource;
    if ((param_1->Crc).bValid != false) {
      bVar9 = IsInParallelGameThread();
      if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
        lVar12 = 0;
      }
      else {
        lVar12 = 1;
      }
      if (((pTVar8->ShadowedValue[lVar12] == false) || (pIVar4 == (IPCGGraphExecutionSource *)0x0))
         || (this_00 == (UPCGNode *)0x0)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      bVar17 = -1 < CpuChannel->Enabled;
      if (bVar17) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId128,"FPCGGraphCache::GetFromCache",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCache.cpp"
                   ,0x80);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId128);
      }
      puVar1 = &(this->MemoryRecords).field_0x49;
      if ((puVar1 == (undefined1 *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      LOCK();
      cVar2 = *puVar1;
      *puVar1 = 1;
      UNLOCK();
      while (cVar2 != '\0') {
        cVar2 = *puVar1;
        while (cVar2 != '\0') {
          cVar2 = *puVar1;
        }
        LOCK();
        cVar2 = *puVar1;
        *puVar1 = 1;
        UNLOCK();
      }
      FPCGCacheEntryKey::FPCGCacheEntryKey(&local_88,pIVar3,&param_1->Crc);
      if ((int)this->_padding_ != *(int *)&(this->CacheData).LookupSet.Elements.field_0x24) {
        puVar14 = *(undefined1 **)&(this->CacheData).LookupSet.Elements.field_0x30;
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = &(this->CacheData).LookupSet.Elements.field_0x28;
        }
        iVar16 = *(int *)(puVar14 +
                         ((ulonglong)(*(int *)(this->CacheData).LookupSet.Hash.InlineData - 1) &
                         (ulonglong)local_88._8_8_ >> 0x20) * 4);
        if (iVar16 != -1) {
          do {
            plVar15 = (longlong *)((longlong)iVar16 * 0x10 + this->_padding_);
            pFVar5 = (FCacheEntry *)*plVar15;
            uVar7 = (pFVar5->Key).CrcHash;
            if (((pFVar5->Key).Element == local_88.Element) && (uVar7 == local_88.CrcHash)) {
              if ((iVar16 != -1) && (plVar15 != (longlong *)0x0)) {
                TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>
                ::MarkAsRecent((TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>
                                *)&this->_padding_,pFVar5);
                lVar12 = *plVar15;
                if ((FPCGDataCollection *)(lVar12 + 0x20) != (FPCGDataCollection *)0x0) {
                  if ((bVar9) && (4 < (byte)LogPCG._0_1_)) {
                    pFVar13 = UPCGNode::GetNodeTitle(this_00,&local_68,ListView);
                    FText::ToString(pFVar13);
                    plVar15 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
                    (**(code **)(*plVar15 + 0x18))(plVar15,local_78);
                    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                    if (local_78[0] != (void *)0x0) {
                      FMemory::Free(local_78[0]);
                    }
                    if (local_68.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
                    }
                  }
                  FPCGDataCollection::operator=(param_2,(FPCGDataCollection *)(lVar12 + 0x20));
                  bVar9 = true;
                  goto LAB_149cc80da;
                }
              }
              break;
            }
            iVar16 = (int)plVar15[1];
          } while (iVar16 != -1);
        }
      }
      if ((bVar9) && (2 < (byte)LogPCG._0_1_)) {
        pFVar13 = UPCGNode::GetNodeTitle(this_00,&local_48,ListView);
        FText::ToString(pFVar13);
        plVar15 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
        (**(code **)(*plVar15 + 0x18))(plVar15,local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_58[0] != (void *)0x0) {
          FMemory::Free(local_58[0]);
        }
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
      }
      bVar9 = false;
LAB_149cc80da:
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = 0;
      }
      if (bVar17) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return bVar9;
    }
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  return false;
}

// GetMemoryBudgetMB @ 149cca000

int __thiscall FPCGGraphCache::GetMemoryBudgetMB(FPCGGraphCache *this)

{
  TConsoleVariableData<int> *pTVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  
  pTVar2 = CVarCacheMemoryBudgetRuntimeMB.Ref;
  pTVar1 = CVarCacheMemoryBudgetEditorMB.Ref;
  if (this->bIsGameWorld == false) {
    bVar3 = IsInParallelGameThread();
    if (!bVar3) {
      bVar3 = IsInGameThread();
      if (!bVar3) {
        return pTVar1->ShadowedValue[1];
      }
    }
    return pTVar1->ShadowedValue[0];
  }
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      return pTVar2->ShadowedValue[1];
    }
  }
  return pTVar2->ShadowedValue[0];
}

// GetReferencerName @ 149ccbd30

FString * __thiscall
FPCGGraphCache::GetReferencerName(FPCGGraphCache *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FPCGGraphCache");
  return __return_storage_ptr__;
}

// GrowCache_Unsafe @ 149cccc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPCGGraphCache::GrowCache_Unsafe(FPCGGraphCache *this)

{
  FCacheEntry *pFVar1;
  undefined4 uVar2;
  code *pcVar3;
  IPCGElement *pIVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FCacheEntry *pFVar10;
  undefined8 *puVar11;
  FCacheEntry *pFVar12;
  bool bVar13;
  undefined1 auStack_e8 [32];
  FCacheEntry *local_c8;
  FCacheEntry *local_c0;
  IPCGElement *local_b8;
  undefined8 uStack_b0;
  TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_> local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId354,"FPCGGraphCache::GrowCache_Unsafe",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCache.cpp"
               ,0x162);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId354);
  }
  local_a8.MaxNumElements = (this->CacheData).MaxNumElements;
  local_a8.LookupSet.Elements._44_4_ = 0x80;
  local_a8.LookupSet.Elements._0_8_ = 0;
  local_a8.LookupSet.Elements._8_8_ = 0;
  local_a8.LookupSet.Elements._32_8_ = 0;
  local_a8.LookupSet.Elements._40_4_ = 0;
  local_a8.LookupSet.Elements._52_4_ = 0;
  local_a8.LookupSet.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.LookupSet.HashSize = 0;
  local_a8.LeastRecent = (FCacheEntry *)0x0;
  local_a8.MostRecent = (FCacheEntry *)0x0;
  local_a8.LookupSet.Elements._48_4_ = 0xffffffff;
  TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::Empty
            (&local_a8,local_a8.MaxNumElements);
  pFVar1 = (this->CacheData).MostRecent;
  while( true ) {
    if (pFVar1 == (FCacheEntry *)0x0) {
      iVar9 = *(int *)&(this->CacheData).LookupSet.Elements.field_0x8 -
              *(int *)&(this->CacheData).LookupSet.Elements.field_0x34;
      iVar8 = iVar9 * 2;
      if (iVar9 < 1) {
        iVar8 = 0x10000;
      }
      ClearCacheInternal(this,iVar8,false);
      pFVar1 = local_a8.MostRecent;
      if (4 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        pFVar1 = local_a8.MostRecent;
      }
      for (; pFVar1 != (FCacheEntry *)0x0; pFVar1 = pFVar1->LessRecent) {
        AddToCacheInternal(this,&pFVar1->Key,&pFVar1->Value,false);
      }
      TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::Empty
                (&local_a8,0);
      local_a8.LookupSet.HashSize = 0;
      if (local_a8.LookupSet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.LookupSet.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_a8);
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    if ((local_a8.MaxNumElements == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MaxNumElements != 0 && \"Cannot add values to zero size TLruCache\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LruCache.h"
                           ,0xaf,L""), bVar7)) break;
    local_b8 = (pFVar1->Key).Element;
    uStack_b0._0_4_ = (pFVar1->Key).CrcHash;
    uStack_b0._4_4_ = (pFVar1->Key).Hash;
    uVar2 = (pFVar1->Key).Hash;
    iVar8 = TSet<TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::FCacheEntry_*,TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::FKeyFuncs,FDefaultSetAllocator>
            ::FindIndexByHash<FPCGCacheEntryKey>(&local_a8.LookupSet,uVar2,&pFVar1->Key);
    if ((iVar8 == -1) ||
       (puVar11 = (undefined8 *)((longlong)iVar8 * 0x10 + local_a8.LookupSet.Elements._0_8_),
       puVar11 == (undefined8 *)0x0)) {
      if (local_a8.LookupSet.Elements._8_4_ - local_a8.LookupSet.Elements._52_4_ ==
          local_a8.MaxNumElements) {
        TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::
        Remove(&local_a8,local_a8.LeastRecent);
      }
      pFVar10 = ::operator_new(0x50);
      pFVar12 = (FCacheEntry *)0x0;
      if (pFVar10 != (FCacheEntry *)0x0) {
        pIVar4 = (pFVar1->Key).Element;
        uVar5 = (pFVar1->Key).CrcHash;
        uVar6 = (pFVar1->Key).Hash;
        pFVar10->LessRecent = (FCacheEntry *)0x0;
        pFVar10->MoreRecent = (FCacheEntry *)0x0;
        (pFVar10->Key).Element = pIVar4;
        (pFVar10->Key).CrcHash = uVar5;
        (pFVar10->Key).Hash = uVar6;
        FPCGDataCollection::FPCGDataCollection(&pFVar10->Value,&pFVar1->Value);
        pFVar12 = pFVar10;
      }
      pFVar12->LessRecent = local_a8.MostRecent;
      if (local_a8.MostRecent != (FCacheEntry *)0x0) {
        (local_a8.MostRecent)->MoreRecent = pFVar12;
      }
      if (local_a8.LeastRecent == (FCacheEntry *)0x0) {
        local_a8.LeastRecent = pFVar12;
      }
      local_c0 = pFVar12;
      local_a8.MostRecent = pFVar12;
      TSet<TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::FCacheEntry_*,TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::FKeyFuncs,FDefaultSetAllocator>
      ::
      Emplace<TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::FCacheEntry_*_const_&>
                (&local_a8.LookupSet,&local_c8,(bool *)&local_c0);
    }
    else {
      pFVar12 = (FCacheEntry *)*puVar11;
      FPCGDataCollection::operator=(&pFVar12->Value,&pFVar1->Value);
      TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::
      MarkAsRecent(&local_a8,pFVar12);
    }
    pFVar1 = pFVar1->LessRecent;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// IsDebuggingEnabled @ 149ccd4e0

bool __thiscall FPCGGraphCache::IsDebuggingEnabled(FPCGGraphCache *this)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarCacheDebugging.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// IsEnabled @ 149ccd520

bool __thiscall FPCGGraphCache::IsEnabled(FPCGGraphCache *this)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  TConsoleVariableData<bool> *pTVar3;
  
  pTVar1 = CVarCacheEnabledRuntime.Ref;
  pTVar3 = CVarCacheEnabledEditor.Ref;
  if (this->bIsGameWorld == false) {
    bVar2 = IsInParallelGameThread();
    if (!bVar2) {
      bVar2 = IsInGameThread();
      if (!bVar2) {
        return pTVar3->ShadowedValue[1];
      }
    }
  }
  else {
    bVar2 = IsInParallelGameThread();
    pTVar3 = pTVar1;
    if (!bVar2) {
      bVar2 = IsInGameThread();
      if (!bVar2) {
        return pTVar1->ShadowedValue[1];
      }
    }
  }
  return pTVar3->ShadowedValue[0];
}

// RemoveFromCacheInternal @ 149cd7b30

void __thiscall
FPCGGraphCache::RemoveFromCacheInternal(FPCGGraphCache *this,FPCGCacheEntryKey *param_1)

{
  IPCGElement *pIVar1;
  undefined4 uVar4;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar5;
  int iVar6;
  ulonglong *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator> *this_00;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  IPCGElement *local_res8;
  FPCGGraphCache *local_res10;
  code *local_48;
  FPCGGraphCache **local_40;
  
  pIVar1 = param_1->Element;
  uVar12 = ((uint)((ulonglong)pIVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pIVar1 >> 4)) *
           -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  if (*(int *)&(this->ElementToCacheEntryKeys).field_0x8 !=
      *(int *)&(this->ElementToCacheEntryKeys).field_0x34) {
    puVar8 = *(undefined1 **)&(this->ElementToCacheEntryKeys).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ElementToCacheEntryKeys).field_0x38;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->ElementToCacheEntryKeys).field_0x48 - 1U &
                              (uVar12 >> 0x10 ^ uVar12)) * 4);
    if (iVar6 != -1) {
      do {
        puVar7 = (ulonglong *)
                 ((longlong)iVar6 * 0x60 + *(longlong *)&(this->ElementToCacheEntryKeys).field_0x0);
        if ((IPCGElement *)*puVar7 == pIVar1) {
          this_00 = (TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>
                     *)(puVar7 + 1);
          if (puVar7 == (ulonglong *)0x0) {
            this_00 = (TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>
                       *)0x0;
          }
          if (this_00 !=
              (TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator> *)
              0x0) {
            if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
              TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>::
              RemoveImpl<FPCGCacheEntryKey>(this_00,param_1->Hash,param_1);
            }
            if ((*(int *)&(this_00->Elements).field_0x8 == *(int *)&(this_00->Elements).field_0x34)
               && (local_res8 = param_1->Element,
                  *(int *)&(this->ElementToCacheEntryKeys).field_0x8 !=
                  *(int *)&(this->ElementToCacheEntryKeys).field_0x34)) {
              uVar12 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_res8 >> 4)) * -0x7a143595;
              uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
              TSet<TTuple<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ::RemoveImpl<IPCGElement_const_*>
                        ((TSet<TTuple<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                          *)&this->ElementToCacheEntryKeys,uVar12 >> 0x10 ^ uVar12,&local_res8);
            }
          }
          break;
        }
        iVar6 = (int)puVar7[0xb];
      } while (iVar6 != -1);
    }
  }
  uVar4 = param_1->Hash;
  iVar6 = TSet<TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::FCacheEntry_*,TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::FKeyFuncs,FDefaultSetAllocator>
          ::FindIndexByHash<FPCGCacheEntryKey>(&(this->CacheData).LookupSet,uVar4,param_1);
  if ((iVar6 != -1) &&
     (plVar11 = (longlong *)
                ((longlong)iVar6 * 0x10 + *(longlong *)&(this->CacheData).LookupSet.Elements),
     plVar11 != (longlong *)0x0)) {
    lVar2 = *plVar11;
    if ((longlong *)(lVar2 + 0x20) != (longlong *)0x0) {
      plVar11 = *(longlong **)(lVar2 + 0x20);
      iVar6 = *(int *)(lVar2 + 0x28);
      plVar10 = plVar11 + (longlong)iVar6 * 0xf;
      while( true ) {
        if (*(int *)(lVar2 + 0x28) != iVar6) {
          `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (plVar11 == plVar10) break;
        plVar3 = (longlong *)*plVar11;
        if (plVar3 != (longlong *)0x0) {
          local_40 = &local_res10;
          local_48 = UE::Core::Private::Function::
                     TFunctionRefCaller<`FPCGGraphCache::RemoveFromMemoryTotal'::__l9::<lambda_1>,void,UPCGData_const_*>
                     ::Call;
          local_res10 = this;
          (**(code **)(*plVar3 + 0x2c0))(plVar3,&local_48);
        }
        plVar11 = plVar11 + 0xf;
      }
      uVar5 = param_1->Hash;
      iVar6 = TSet<TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::FCacheEntry_*,TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::FKeyFuncs,FDefaultSetAllocator>
              ::FindIndexByHash<FPCGCacheEntryKey>(&(this->CacheData).LookupSet,uVar5,param_1);
      if ((iVar6 != -1) &&
         (puVar9 = (undefined8 *)
                   ((longlong)iVar6 * 0x10 + *(longlong *)&(this->CacheData).LookupSet.Elements),
         puVar9 != (undefined8 *)0x0)) {
        TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::
        Remove(&this->CacheData,(FCacheEntry *)*puVar9);
      }
    }
  }
  return;
}

// RemoveFromMemoryTotal @ 149cd7d50

void __thiscall
FPCGGraphCache::RemoveFromMemoryTotal(FPCGGraphCache *this,FPCGDataCollection *param_1)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  FPCGGraphCache *local_res18 [2];
  code *local_38;
  FPCGGraphCache **local_30;
  
  iVar1 = (param_1->TaggedData).ArrayNum;
  pFVar3 = (param_1->TaggedData).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((param_1->TaggedData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar3 == pFVar4) break;
    plVar2 = *(longlong **)pFVar3;
    if (plVar2 != (longlong *)0x0) {
      local_30 = local_res18;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FPCGGraphCache::RemoveFromMemoryTotal'::__l9::<lambda_1>,void,UPCGData_const_*>
                 ::Call;
      local_res18[0] = this;
      (**(code **)(*plVar2 + 0x2c0))(plVar2,&local_38);
    }
    pFVar3 = pFVar3 + 0x78;
  }
  return;
}

// StoreInCache @ 149cdd570

void __thiscall
FPCGGraphCache::StoreInCache
          (FPCGGraphCache *this,FPCGStoreInCacheParams *param_1,FPCGDataCollection *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  IPCGElement *pIVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FPCGCacheEntryKey local_38;
  
  bVar5 = IsEnabled((FPCGGraphCache *)&this[-1].TotalMemoryUsed);
  if (bVar5) {
    pIVar3 = param_1->Element;
    if ((param_1->Crc).bValid == false) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3506406219508088998>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCache.cpp"
                         ,0xa6,"InDependenciesCrc.IsValid()");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      pFVar8 = (param_2->TaggedData).AllocatorInstance.Data;
      iVar2 = (param_2->TaggedData).ArrayNum;
      pFVar9 = pFVar8 + (longlong)iVar2 * 0x78;
      while( true ) {
        if ((param_2->TaggedData).ArrayNum != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar8 == pFVar9) break;
        if (((*(longlong **)pFVar8 != (longlong *)0x0) &&
            (cVar6 = (**(code **)(**(longlong **)pFVar8 + 0x2d0))(), cVar6 == '\0')) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<3506406219508089006>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCache.cpp"
                               ,0xae,"!Data.Data || Data.Data->IsCacheable()"), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar8 = pFVar8 + 0x78;
      }
      bVar5 = -1 < CpuChannel->Enabled;
      if (bVar5) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId178,"FPCGGraphCache::StoreInCache",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCache.cpp"
                   ,0xb2);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId178);
      }
      puVar1 = &(this->MemoryRecords).field_0x49;
      if ((puVar1 == (undefined1 *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      LOCK();
      cVar6 = *puVar1;
      *puVar1 = 1;
      UNLOCK();
      while (cVar6 != '\0') {
        cVar6 = *puVar1;
        while (cVar6 != '\0') {
          cVar6 = *puVar1;
        }
        LOCK();
        cVar6 = *puVar1;
        *puVar1 = 1;
        UNLOCK();
      }
      if ((int)this->_padding_ - *(int *)&(this->CacheData).LookupSet.Elements.field_0x24 ==
          *(int *)&(this->CacheData).LeastRecent) {
        GrowCache_Unsafe((FPCGGraphCache *)&this[-1].TotalMemoryUsed);
      }
      FPCGCacheEntryKey::FPCGCacheEntryKey(&local_38,pIVar3,&param_1->Crc);
      AddToCacheInternal((FPCGGraphCache *)&this[-1].TotalMemoryUsed,&local_38,param_2,true);
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = 0;
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  return;
}

// ValidateElementToCacheEntryKeys @ 149ce2930

void __thiscall FPCGGraphCache::ValidateElementToCacheEntryKeys(FPCGGraphCache *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  ulonglong uVar16;
  
  pTVar3 = CVarValidateElementToCacheEntryKeys.Ref;
  bVar4 = IsInParallelGameThread();
  uVar11 = 0;
  uVar5 = 1;
  if (!bVar4) {
    bVar4 = IsInGameThread();
    uVar8 = 1;
    if (!bVar4) goto LAB_149ce296f;
  }
  uVar8 = uVar11;
LAB_149ce296f:
  if (pTVar3->ShadowedValue[uVar8] != false) {
    uVar13 = 0;
    puVar1 = &(this->ElementToCacheEntryKeys).field_0x10;
    uVar12 = *(uint *)&(this->ElementToCacheEntryKeys).field_0x28;
    uVar6 = uVar13;
    uVar15 = uVar13;
    if (uVar12 != 0) {
      puVar17 = *(uint **)&(this->ElementToCacheEntryKeys).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar6 = *puVar17;
      uVar8 = uVar11;
      uVar16 = uVar11;
      uVar15 = 0;
      uVar13 = 0;
      while (uVar6 == 0) {
        iVar10 = (int)uVar8;
        uVar15 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uVar15;
        uVar13 = iVar10 + 1;
        uVar8 = (ulonglong)uVar13;
        uVar6 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
        goto LAB_149ce2a1d;
        uVar6 = puVar17[(longlong)iVar10 + 1];
      }
      uVar5 = -uVar6 & uVar6;
      uVar8 = (ulonglong)uVar5 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (int)lVar9;
      uVar6 = (uVar15 - 1) + local_res18;
      if ((int)uVar12 < (int)uVar6) {
        uVar6 = uVar12;
      }
    }
LAB_149ce2a1d:
    uVar7 = *(uint *)&(this->ElementToCacheEntryKeys).field_0x28;
    uVar18 = uVar7 & 0xffffffe0;
    TStack_70._padding_ = CONCAT44(uVar5,uVar13);
    TStack_70.CurrentBitIndex = uVar6;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar10 = (int)uVar7 >> 5;
    TStack_70._28_4_ = uVar6;
    TStack_70.BaseBitIndex = uVar15;
    uStack_50 = CONCAT44(uStack_7c,
                         *(int *)&(this->ElementToCacheEntryKeys).field_0x8 -
                         *(int *)&(this->ElementToCacheEntryKeys).field_0x34);
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar7 < 0) || ((int)uVar12 < (int)uVar7)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = *(uint *)&(this->ElementToCacheEntryKeys).field_0x28;
    if (uVar7 != uVar5) {
      puVar14 = *(undefined1 **)&(this->ElementToCacheEntryKeys).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar10 * 4);
      while (uVar12 == 0) {
        lVar9 = (longlong)iVar10;
        uVar18 = uVar18 + 0x20;
        iVar10 = iVar10 + 1;
        uVar7 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_149ce2b20;
        uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
      }
      uVar8 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res20 = (int)lVar9;
      uVar7 = local_res20 + -1 + uVar18;
      if ((int)uVar5 < (int)uVar7) {
        uVar7 = uVar5;
      }
    }
LAB_149ce2b20:
    while( true ) {
      if (*(int *)&(this->ElementToCacheEntryKeys).field_0x8 -
          *(int *)&(this->ElementToCacheEntryKeys).field_0x34 != (int)uStack_50) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_70.CurrentBitIndex == uVar7) &&
         (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      uVar11 = (ulonglong)
               (uint)((int)uVar11 +
                     (*(int *)((longlong)TStack_70.CurrentBitIndex * 0x60 + 0x10 +
                              *(longlong *)&this->ElementToCacheEntryKeys) -
                     *(int *)((longlong)TStack_70.CurrentBitIndex * 0x60 + 0x3c +
                             *(longlong *)&this->ElementToCacheEntryKeys)));
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
    if (((int)uVar11 !=
         *(int *)&(this->CacheData).LookupSet.Elements.field_0x8 -
         *(int *)&(this->CacheData).LookupSet.Elements.field_0x34) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CacheKeyCount == CacheData.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCache.cpp"
                           ,0x12a,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

