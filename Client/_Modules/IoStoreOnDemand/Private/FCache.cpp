// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 13

// FCache @ 1445a2230

FCache * __thiscall UE::IoStore::JournaledCache::FCache::FCache(FCache *this,FConfig *param_1)

{
  (this->MemLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->MemCache).MaxSize = (uint)param_1->_padding_;
  (this->MemCache).UsedSize = 0;
  (this->MemCache).Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MemCache).Items.ArrayNum = 0;
  (this->MemCache).Items.ArrayMax = 0;
  FDiskCache::FDiskCache
            (&this->DiskCache,&param_1->Path,param_1->_padding_,
             *(uint *)((longlong)&param_1->_padding_ + 4));
  this->Demand = (atomic<int>)0x0;
  (this->Partial).Key = 0;
  FIoBuffer::FIoBuffer(&(this->Partial).Data);
  if (*(char *)((longlong)&param_1->_padding_ + 3) != '\0') {
    FDiskCache::Drop(&this->DiskCache);
  }
  return this;
}

// DebugVisit @ 1445c2a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall
UE::IoStore::JournaledCache::FCache::DebugVisit
          (FCache *this,void *param_1,_func___cdecl_void_void_ptr_FDebugCacheEntry_ptr *param_2)

{
  int iVar1;
  ulong64 uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  FDebugCacheEntry local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  AcquireSRWLockShared((PSRWLOCK)this);
  iVar1 = (this->MemCache).Items.ArrayNum;
  pFVar4 = (this->MemCache).Items.AllocatorInstance.Data;
  local_40.Key = 0;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  local_40.Size = 0;
  local_40._12_4_ = 1;
  while( true ) {
    if ((this->MemCache).Items.ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::IoStore::JournaledCache::FMemCache::FItem,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_48);
    }
    if (pFVar4 == pFVar5) break;
    local_40.Key = *(ulong64 *)pFVar4;
    local_40.Size = *(uint *)(*(longlong *)(pFVar4 + 8) + 8);
    (*param_2)(param_1,&local_40);
    pFVar4 = pFVar4 + 0x10;
  }
  iVar1 = (this->MemCache).Items.ArrayNum;
  uVar3 = FDiskCache::DebugVisit(&this->DiskCache,param_1,param_2);
  uVar3 = iVar1 + uVar3;
  uVar2 = (this->Partial).Key;
  if (uVar2 != 0) {
    uVar3 = uVar3 + 1;
    local_40._Unused = 0;
    local_40.IsMemCache = 1;
    local_40.Size = ((this->Partial).Data.CorePtr.Reference)->DataSizeLow;
    local_40.Key = uVar2;
    (*param_2)(param_1,&local_40);
  }
  ReleaseSRWLockShared((PSRWLOCK)this);
  return uVar3;
}

// Drop @ 1445c8e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::IoStore::JournaledCache::FCache::Drop(FCache *this)

{
  int *piVar1;
  int iVar2;
  FIoBuffer this_00;
  FIoBuffer local_20;
  undefined8 uStack_18;
  
  FDiskCache::Drop(&this->DiskCache);
  AcquireSRWLockExclusive((PSRWLOCK)this);
  if (3 < (byte)LogIas._0_1_) {
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
  }
  DestructItems<UE::IoStore::JournaledCache::FMemCache::FItem,int>
            ((FItem *)(this->MemCache).Items.AllocatorInstance.Data,(this->MemCache).Items.ArrayNum)
  ;
  piVar1 = &(this->MemCache).Items.ArrayMax;
  (this->MemCache).Items.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->MemCache).Items.AllocatorInstance,0,piVar1);
  }
  (this->MemCache).UsedSize = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  local_20.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
  uStack_18 = 0;
  FIoBuffer::FIoBuffer(&local_20);
  (this->Partial).Key = 0;
  FIoBuffer::operator=(&(this->Partial).Data,&local_20);
  this_00.CorePtr.Reference = local_20.CorePtr.Reference;
  (this->Partial).Cursor = (uint)uStack_18;
  if (local_20.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_20.CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)this_00.CorePtr.Reference + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this_00.CorePtr.Reference);
      ::operator_delete((void *)this_00.CorePtr.Reference,0x20);
    }
  }
  return;
}

// Evict @ 1445cab30

bool __thiscall UE::IoStore::JournaledCache::FCache::Evict(FCache *this,ulong64 param_1)

{
  int *piVar1;
  ulong64 *puVar2;
  longlong lVar3;
  longlong lVar4;
  FOnDemandIoBackendStats *this_00;
  FIoBuffer this_01;
  bool bVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  FIoBuffer local_30;
  undefined8 uStack_28;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->DiskCache);
  this_00 = GStatistics;
  if (*(int *)&(this->DiskCache).DataMap.field_0x8 != *(int *)&(this->DiskCache).DataMap.field_0x34)
  {
    puVar6 = *(undefined1 **)&(this->DiskCache).DataMap.field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->DiskCache).DataMap.field_0x38;
    }
    iVar8 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->DiskCache).DataMap.field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar8 != -1) {
      lVar4 = *(longlong *)&(this->DiskCache).DataMap;
      do {
        lVar3 = lVar4 + (longlong)iVar8 * 0x18;
        if (*(ulong64 *)(lVar4 + (longlong)iVar8 * 0x18) == param_1) {
          puVar2 = &(this->DiskCache).MappedBytes;
          *puVar2 = *puVar2 - (*(ulonglong *)(lVar3 + 8) >> 0x27);
          FOnDemandIoBackendStats::OnCachePersistedBytes(this_00,(this->DiskCache).MappedBytes);
          TSet<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>,FDefaultSetAllocator>
                           *)&(this->DiskCache).DataMap,iVar8);
          ReleaseSRWLockExclusive((PSRWLOCK)&this->DiskCache);
          bVar7 = true;
          goto LAB_1445cabbb;
        }
        iVar8 = *(int *)(lVar3 + 0x10);
      } while (iVar8 != -1);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->DiskCache);
  bVar7 = false;
LAB_1445cabbb:
  AcquireSRWLockExclusive((PSRWLOCK)this);
  bVar5 = FMemCache::Evict(&this->MemCache,param_1,bVar7);
  bVar5 = (bool)(bVar5 | bVar7);
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  if ((this->Partial).Key == param_1) {
    local_30.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
    uStack_28 = 0;
    FIoBuffer::FIoBuffer(&local_30);
    (this->Partial).Key = 0;
    FIoBuffer::operator=(&(this->Partial).Data,&local_30);
    this_01.CorePtr.Reference = local_30.CorePtr.Reference;
    (this->Partial).Cursor = (uint)uStack_28;
    if (local_30.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_30.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)this_01.CorePtr.Reference + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)this_01.CorePtr.Reference);
        ::operator_delete((void *)this_01.CorePtr.Reference,0x20);
      }
    }
    bVar5 = true;
  }
  return bVar5;
}

// Flush @ 1445cd970

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall UE::IoStore::JournaledCache::FCache::Flush(FCache *this)

{
  FDiskCache *this_00;
  IFileHandle *pIVar1;
  uint uVar2;
  
  this_00 = &this->DiskCache;
  pIVar1 = (this->DiskCache).DataHandle.Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (this->DiskCache).DataHandle.Ptr = (IFileHandle *)0x0;
    (**(code **)*pIVar1)(pIVar1,1);
  }
  uVar2 = FDiskJournal::Flush(&(this->DiskCache).Journal);
  AcquireSRWLockShared((PSRWLOCK)this_00);
  if (6 < (byte)LogIas._0_1_) {
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
  }
  ReleaseSRWLockShared((PSRWLOCK)this_00);
  FDiskCache::OpenDataFile(this_00);
  return uVar2;
}

// Get @ 1445d03a0

ulong64 __thiscall
UE::IoStore::JournaledCache::FCache::Get(FCache *this,ulong64 param_1,FIoBuffer *param_2)

{
  int *piVar1;
  int iVar2;
  BufCore *pBVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  FMapEntry *pFVar7;
  FIoBuffer *pFVar8;
  FIoBuffer this_00;
  FIoBuffer local_res10 [2];
  FIoBuffer local_res20;
  
  if (param_1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Key",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                       ,0x594,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&this->DiskCache);
  pFVar7 = TMapBase<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
           ::Find((TMapBase<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
                   *)&(this->DiskCache).DataMap,param_1);
  ReleaseSRWLockShared((PSRWLOCK)&this->DiskCache);
  if (pFVar7 != (FMapEntry *)0x0) {
    return param_1;
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  if (CloneCachedIOBufferData < 1) {
    pFVar8 = FMemCache::Get(&this->MemCache,param_1);
    if (pFVar8 != (FIoBuffer *)0x0) {
      FIoBuffer::operator=(param_2,pFVar8);
    }
    if ((this->Partial).Key == param_1) {
      FIoBuffer::operator=(param_2,&(this->Partial).Data);
    }
  }
  else {
    if ((this->Partial).Key == param_1) {
      pBVar3 = (this->Partial).Data.CorePtr.Reference;
      pFVar8 = FIoBuffer::FIoBuffer
                         (local_res10,Clone,pBVar3->DataPtr,
                          (ulonglong)CONCAT14(pBVar3->DataSizeHigh,pBVar3->DataSizeLow));
      FIoBuffer::operator=(param_2,pFVar8);
      this_00.CorePtr.Reference = local_res10[0].CorePtr.Reference;
    }
    else {
      pFVar8 = FMemCache::Get(&this->MemCache,param_1);
      if (pFVar8 == (FIoBuffer *)0x0) goto LAB_1445d051a;
      pBVar3 = (pFVar8->CorePtr).Reference;
      pFVar8 = FIoBuffer::FIoBuffer
                         (&local_res20,Clone,pBVar3->DataPtr,
                          (ulonglong)CONCAT14(pBVar3->DataSizeHigh,pBVar3->DataSizeLow));
      FIoBuffer::operator=(param_2,pFVar8);
      this_00.CorePtr.Reference = local_res20.CorePtr.Reference;
    }
    if (this_00.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)this_00.CorePtr.Reference);
      LOCK();
      piVar1 = &((BufCore *)this_00.CorePtr.Reference)->NumRefs;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)this_00.CorePtr.Reference);
        ::operator_delete((void *)this_00.CorePtr.Reference,0x20);
      }
    }
  }
LAB_1445d051a:
  ReleaseSRWLockShared((PSRWLOCK)this);
  return 0;
}

// GetAilments @ 1445d1340

uint __thiscall UE::IoStore::JournaledCache::FCache::GetAilments(FCache *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((this->DiskCache).Journal.JrnHandle.Ptr == (IFileHandle *)0x0);
  uVar2 = uVar1 | 2;
  if ((this->DiskCache).DataHandle.Ptr != (IFileHandle *)0x0) {
    uVar2 = uVar1;
  }
  return uVar2;
}

// GetDemand @ 1445d4c90

uint __thiscall UE::IoStore::JournaledCache::FCache::GetDemand(FCache *this)

{
  return (uint)this->Demand;
}

// Has @ 1445d9320

bool __thiscall UE::IoStore::JournaledCache::FCache::Has(FCache *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMapEntry *pFVar4;
  FIoBuffer *pFVar5;
  
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Key",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                       ,0x586,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&this->DiskCache);
  pFVar4 = TMapBase<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
           ::Find((TMapBase<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
                   *)&(this->DiskCache).DataMap,param_1);
  ReleaseSRWLockShared((PSRWLOCK)&this->DiskCache);
  if (pFVar4 == (FMapEntry *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)this);
    pFVar5 = FMemCache::Get(&this->MemCache,param_1);
    if ((pFVar5 == (FIoBuffer *)0x0) && ((this->Partial).Key != param_1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    ReleaseSRWLockShared((PSRWLOCK)this);
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

// Load @ 1445df780

bool __thiscall UE::IoStore::JournaledCache::FCache::Load(FCache *this)

{
  int iVar1;
  
  iVar1 = LoadCache(&this->DiskCache);
  if (iVar1 < 0) {
    Drop(this);
  }
  return 0 < iVar1;
}

// Materialize @ 1445e2050

EIoErrorCode __thiscall
UE::IoStore::JournaledCache::FCache::Materialize
          (FCache *this,ulong64 param_1,FIoBuffer *param_2,uint param_3)

{
  BufCore *pBVar1;
  EIoErrorCode EVar2;
  
  EVar2 = FDiskCache::Materialize(&this->DiskCache,param_1,param_2,param_3);
  if (EVar2 == Ok) {
    pBVar1 = (param_2->CorePtr).Reference;
    FOnDemandIoBackendStats::OnCacheGet
              (GStatistics,(ulonglong)CONCAT14(pBVar1->DataSizeHigh,pBVar1->DataSizeLow));
  }
  return EVar2;
}

// Put @ 1445efe00

bool __thiscall
UE::IoStore::JournaledCache::FCache::Put(FCache *this,ulong64 param_1,FIoBuffer *param_2)

{
  int *piVar1;
  int iVar2;
  FIoBuffer this_00;
  bool bVar3;
  FIoBuffer local_res8;
  
  local_res8 = (FIoBuffer)(param_2->CorePtr).Reference;
  if (local_res8.CorePtr.Reference != (BufCore *)0x0) {
    LOCK();
    ((BufCore *)local_res8.CorePtr.Reference)->NumRefs =
         ((BufCore *)local_res8.CorePtr.Reference)->NumRefs + 1;
    UNLOCK();
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  bVar3 = FMemCache::Put(&this->MemCache,param_1,&local_res8);
  if (bVar3) {
    this->Demand = (atomic<int>)(((this->MemCache).UsedSize * 100) / (this->MemCache).MaxSize);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  this_00.CorePtr.Reference = local_res8.CorePtr.Reference;
  if (local_res8.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_res8.CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)this_00.CorePtr.Reference + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this_00.CorePtr.Reference);
      ::operator_delete((void *)this_00.CorePtr.Reference,0x20);
    }
  }
  return bVar3;
}

// WriteMemToDisk @ 144610120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall UE::IoStore::JournaledCache::FCache::WriteMemToDisk(FCache *this,int param_1)

{
  int *piVar1;
  BufCore *pBVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  FIoBuffer FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FDiskJournal *pFVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStackY_198 [32];
  TArray<UE::IoStore::JournaledCache::FMemCache::FItem,TSizedDefaultAllocator<32>_> local_148;
  int local_138;
  FItem local_130;
  int local_120;
  ulonglong local_118;
  FItem local_110;
  ulong64 local_100;
  FIoBuffer local_f8;
  longlong local_f0;
  TMemoryView<void_const_> local_e8;
  FDiskPhrase local_d8;
  ulong64 local_b8;
  FIoBuffer local_b0;
  undefined8 uStack_a8;
  FDiskCache *local_a0;
  ulong64 local_98;
  FIoBuffer local_90;
  uint local_88;
  uchar *local_78;
  ulonglong uStack_70;
  TMemoryView<void_const_> local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1522,"IasCache::Flush_MemCache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
               ,0x5f2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1522);
  }
  local_a0 = &this->DiskCache;
  uVar12 = 0;
  uVar17 = (this->DiskCache).DataCursor;
  if ((this->DiskCache).MaxDataSize <= uVar17) {
    (this->DiskCache).OverRemoval = 0;
    (this->DiskCache).DataCursor = 0;
    uVar17 = uVar12;
  }
  lVar15 = (this->DiskCache).MaxDataSize - uVar17;
  uVar17 = 0;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar7 = param_1;
  if (lVar15 <= param_1) {
    uVar7 = (uint)lVar15;
  }
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_118 = lVar15;
  local_f0 = (longlong)param_1;
  AcquireSRWLockExclusive((PSRWLOCK)this);
  uVar11 = uVar12;
  if ((this->Partial).Key != 0) {
    uVar14 = (this->Partial).Cursor;
    pBVar2 = (this->Partial).Data.CorePtr.Reference;
    uVar16 = (ulonglong)CONCAT14(pBVar2->DataSizeHigh,pBVar2->DataSizeLow);
    uVar11 = (ulonglong)uVar14;
    if (uVar16 < uVar14) {
      uVar11 = uVar16;
    }
    uVar12 = (longlong)(int)uVar7;
    if (uVar16 - uVar11 < (ulonglong)(longlong)(int)uVar7) {
      uVar12 = uVar16 - uVar11;
    }
    local_78 = pBVar2->DataPtr + uVar11;
    (this->Partial).Cursor = uVar14 + (int)uVar12;
    local_130.Key = 0;
    uStack_70 = uVar12;
    local_68.Data = local_78;
    local_68.Size = uVar12;
    FIoBuffer::FIoBuffer(&local_130.Data,&local_68,&(this->Partial).Data);
    pBVar2 = (this->Partial).Data.CorePtr.Reference;
    if ((this->Partial).Cursor < pBVar2->DataSizeLow) {
      if (lVar15 <= local_f0) {
        (this->Partial).Cursor = 0;
      }
    }
    else {
      local_130.Key = (this->Partial).Key;
      uVar17 = (ulonglong)(pBVar2->DataSizeLow - (int)uVar12);
      local_b8 = 0;
      local_b0.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
      uStack_a8 = 0;
      FIoBuffer::FIoBuffer(&local_b0);
      (this->Partial).Key = local_b8;
      FIoBuffer::operator=(&(this->Partial).Data,&local_b0);
      FVar5.CorePtr.Reference = local_b0.CorePtr.Reference;
      (this->Partial).Cursor = (uint)uStack_a8;
      if (local_b0.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_b0.CorePtr.Reference);
        LOCK();
        piVar1 = (int *)((longlong)FVar5.CorePtr.Reference + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)FVar5.CorePtr.Reference);
          ::operator_delete((void *)FVar5.CorePtr.Reference,0x20);
        }
      }
    }
    if (((local_148.AllocatorInstance.Data <= &local_130) &&
        (&local_130 <
         (FItem *)(local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 0x10))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    iVar8 = local_148.ArrayNum;
    if (local_148.ArrayNum == local_148.ArrayMax) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_148.AllocatorInstance,&local_148.ArrayMax);
    }
    local_148.ArrayNum = iVar8 + 1;
    lVar15 = (longlong)iVar8;
    *(ulong64 *)&local_148.AllocatorInstance.Data[lVar15 * 0x10].field_0x0 = local_130.Key;
    *(undefined8 *)(local_148.AllocatorInstance.Data + lVar15 * 0x10 + 8) = 0;
    *(TRefCountPtr<FIoBuffer::BufCore> *)(local_148.AllocatorInstance.Data + lVar15 * 0x10 + 8) =
         local_130.Data.CorePtr.Reference;
    uVar11 = uVar17;
    if (local_130.Data.CorePtr.Reference != (BufCore *)0x0) {
      LOCK();
      *(int *)((longlong)local_130.Data.CorePtr.Reference + 0xc) =
           *(int *)((longlong)local_130.Data.CorePtr.Reference + 0xc) + 1;
      UNLOCK();
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_130.Data.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)local_130.Data.CorePtr.Reference + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_130.Data.CorePtr.Reference);
        ::operator_delete((void *)local_130.Data.CorePtr.Reference,0x20);
      }
    }
  }
  iVar8 = (int)uVar12;
  if (iVar8 < (int)uVar7) {
    iVar9 = FMemCache::Peel(&this->MemCache,uVar7 - iVar8,&local_148);
    uVar12 = (ulonglong)(uint)(iVar8 + iVar9);
    this->Demand = (atomic<int>)(((this->MemCache).UsedSize * 100) / (this->MemCache).MaxSize);
  }
  local_138 = (int)uVar12 - uVar7;
  if (0 < local_138) {
    if (local_148.ArrayNum < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
    }
    local_100 = *(ulong64 *)
                 &local_148.AllocatorInstance.Data[(longlong)local_148.ArrayNum * 0x10 + -0x10].
                  field_0x0;
    local_f8.CorePtr.Reference =
         *(TRefCountPtr<FIoBuffer::BufCore> *)
          &local_148.AllocatorInstance.Data[(longlong)local_148.ArrayNum * 0x10 + -8].field_0x0;
    *(undefined8 *)
     &local_148.AllocatorInstance.Data[(longlong)local_148.ArrayNum * 0x10 + -8].field_0x0 = 0;
    local_120 = local_148.ArrayNum + -1;
    pFVar18 = local_148.AllocatorInstance.Data + (longlong)local_120 * 0x10;
    pBVar2 = *(BufCore **)(pFVar18 + 8);
    if (pBVar2 != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount(pBVar2);
      LOCK();
      piVar1 = &pBVar2->NumRefs;
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        FIoBuffer::BufCore::~BufCore(pBVar2);
        ::operator_delete(pBVar2,0x20);
      }
    }
    iVar9 = (local_148.ArrayNum - local_120) + -1;
    iVar8 = local_148.ArrayNum;
    if (iVar9 != 0) {
      memmove(pFVar18,pFVar18 + 0x10,(longlong)iVar9 << 4);
      iVar8 = local_148.ArrayNum;
    }
    local_148.ArrayNum = iVar8 + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&local_148.AllocatorInstance,iVar8 + -1,&local_148.ArrayMax);
    local_110.Key = 0;
    uVar17 = (ulonglong)
             CONCAT14(*(uchar *)((longlong)local_f8.CorePtr.Reference + 0x18),
                      *(uint *)((longlong)local_f8.CorePtr.Reference + 8));
    local_e8.Data = *(void **)local_f8.CorePtr.Reference;
    uVar14 = *(uint *)((longlong)local_f8.CorePtr.Reference + 8) - local_138;
    local_e8.Size = (longlong)(int)uVar14;
    if (uVar17 < (ulonglong)(longlong)(int)uVar14) {
      local_e8.Size = uVar17;
    }
    FIoBuffer::FIoBuffer(&local_110.Data,&local_e8,&local_f8);
    if (((local_148.AllocatorInstance.Data <= &local_110) &&
        (&local_110 <
         (FItem *)(local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 0x10))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    iVar8 = local_148.ArrayNum;
    if (local_148.ArrayNum == local_148.ArrayMax) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_148.AllocatorInstance,&local_148.ArrayMax);
    }
    uVar12 = (ulonglong)uVar7;
    local_148.ArrayNum = iVar8 + 1;
    pFVar18 = local_148.AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(ulong64 *)&pFVar18->field_0x0 = local_110.Key;
    *(undefined8 *)(pFVar18 + 8) = 0;
    *(TRefCountPtr<FIoBuffer::BufCore> *)(pFVar18 + 8) = local_110.Data.CorePtr.Reference;
    local_90.CorePtr.Reference = local_f8.CorePtr.Reference;
    local_110.Data.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
    local_88 = uVar14;
    if ((longlong)local_118 <= local_f0) {
      local_88 = 0;
    }
    local_98 = local_100;
    local_f8.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
    (this->Partial).Key = local_100;
    FIoBuffer::operator=(&(this->Partial).Data,&local_90);
    FVar5.CorePtr.Reference = local_90.CorePtr.Reference;
    (this->Partial).Cursor = local_88;
    if (local_90.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_90.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)FVar5.CorePtr.Reference + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)FVar5.CorePtr.Reference);
        ::operator_delete((void *)FVar5.CorePtr.Reference,0x20);
      }
    }
    FVar5.CorePtr.Reference = local_f8.CorePtr.Reference;
    if (local_f8.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_f8.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)FVar5.CorePtr.Reference + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)FVar5.CorePtr.Reference);
        ::operator_delete((void *)FVar5.CorePtr.Reference,0x20);
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  uVar14 = (uint)uVar12;
  if ((((int)uVar14 < 0) || ((int)uVar7 < (int)uVar14)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("WriteSize >= 0 && WriteSize <= Allowance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                         ,0x639,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  pFVar13 = &(this->DiskCache).Journal;
  if ((((this->DiskCache).Journal.Cursor & 0xf) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Cursor & (sizeof(FDataEntry) - 1)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                         ,0x21c,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  pFVar18 = (pFVar13->Entries).AllocatorInstance.Data;
  local_58 = 0;
  uStack_50 = 0;
  if (((pFVar18 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       pFVar18 + (longlong)(this->DiskCache).Journal.Entries.ArrayMax * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  iVar8 = (this->DiskCache).Journal.Entries.ArrayNum;
  piVar1 = &(this->DiskCache).Journal.Entries.ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)pFVar13,piVar1);
  }
  (this->DiskCache).Journal.Entries.ArrayNum = iVar8 + 1;
  pFVar18 = (pFVar13->Entries).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar18 = local_58;
  *(undefined8 *)(pFVar18 + 8) = uStack_50;
  local_d8.Index = (this->DiskCache).Journal.Entries.ArrayNum;
  iVar8 = ((this->DiskCache).Journal.MaxSize - (this->DiskCache).Journal.Cursor >> 4) -
          local_d8.Index;
  local_d8.Cursor = 0;
  local_d8.MaxEntries = 0xffff;
  if (iVar8 < 0xffff) {
    local_d8.MaxEntries = iVar8;
  }
  local_d8.Entries = &pFVar13->Entries;
  local_d8.Buffer.Ptr = operator_new__(uVar12 & 0xffffffff);
  operator_delete__((void *)0x0);
  operator_delete__((void *)0x0);
  uVar17 = (ulonglong)local_148.ArrayNum;
  uVar7 = 0;
  local_118 = uVar17;
  if (0 < local_148.ArrayNum) {
    lVar19 = 0;
    lVar15 = 0;
    while( true ) {
      uVar10 = 0;
      if ((int)uVar7 < (int)uVar17) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      iVar8 = (int)uVar17;
      if (uVar10 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return uVar7;
        }
        iVar8 = local_148.ArrayNum;
      }
      FVar4.Data = local_148.AllocatorInstance.Data;
      if (((*(longlong *)(local_148.AllocatorInstance.Data + lVar15) == 0) && (uVar7 != iVar8 - 1U))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Key || i == (PeelItems.Num() - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                                ,0x63f,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
      if ((local_d8.MaxEntries < 1) ||
         (bVar6 = FDiskPhrase::Add(&local_d8,*(ulong64 *)(FVar4.Data + lVar15),
                                   (FIoBuffer *)(FVar4.Data + lVar15 + 8),(uint)uVar11), !bVar6))
      break;
      uVar7 = uVar7 + 1;
      lVar19 = lVar19 + 1;
      lVar15 = lVar15 + 0x10;
      uVar11 = 0;
      if ((longlong)local_118 <= lVar19) goto LAB_14461093f;
      uVar17 = local_148._8_8_ & 0xffffffff;
    }
    if (-1 < (int)uVar7) {
      uVar14 = local_d8.Cursor;
    }
  }
LAB_14461093f:
  FDiskCache::ClosePhrase(local_a0,&local_d8);
  operator_delete__(local_d8.Buffer.Ptr);
  DestructItems<UE::IoStore::JournaledCache::FMemCache::FItem,int>
            ((FItem *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
  if ((FItem *)local_148.AllocatorInstance.Data != (FItem *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return uVar14;
}

