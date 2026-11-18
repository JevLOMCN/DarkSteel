// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 18

// FDiskCache @ 1445a28c0

FDiskCache * __thiscall
UE::IoStore::JournaledCache::FDiskCache::FDiskCache
          (FDiskCache *this,FString *param_1,ulong64 param_2,uint param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  IFileHandle *pIVar3;
  code *pcVar4;
  bool bVar5;
  FDiskCache *pFVar6;
  IPlatformFile *pIVar7;
  IFileHandle *pIVar8;
  int iVar9;
  wchar_t *pwVar10;
  undefined4 uStack_c;
  
  (this->Lock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->BinPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BinPath).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BinPath).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->BinPath).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  *(undefined8 *)&this->DataMap = 0;
  *(undefined8 *)&(this->DataMap).field_0x8 = 0;
  *(undefined8 *)&(this->DataMap).field_0x20 = 0;
  *(undefined4 *)&(this->DataMap).field_0x28 = 0;
  *(undefined4 *)&(this->DataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataMap).field_0x34 = 0;
  *(undefined8 *)&(this->DataMap).field_0x40 = 0;
  *(undefined4 *)&(this->DataMap).field_0x48 = 0;
  this->MaxDataSize = param_2;
  (this->DataHandle).Ptr = (IFileHandle *)0x0;
  this->MappedBytes = 0;
  this->DataCursor = 0;
  this->OverRemoval = 0;
  pFVar2 = (this->BinPath).Data.AllocatorInstance.Data;
  iVar1 = (this->BinPath).Data.ArrayNum;
  (this->Journal).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Journal).Entries.ArrayNum = 0;
  (this->Journal).Entries.ArrayMax = 0;
  (this->Journal).Marker = 0;
  (this->Journal).Cursor = 0;
  (this->Journal).Magic = 0x4930006;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  (this->Journal).MaxSize = param_3 & 0xfffffff0;
  (this->Journal).RootPath.DataPtr = (wchar_t *)pFVar2;
  *(ulonglong *)&(this->Journal).RootPath.Size = CONCAT44(uStack_c,iVar9);
  (this->Journal).JrnHandle.Ptr = (IFileHandle *)0x0;
  FDiskJournal::OpenJrnFile(&this->Journal);
  pwVar10 = L"";
  if (this->MaxDataSize < 0x40) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxDataSize >= HASH_CHECKSUM_SIZE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                       ,0x2ab,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FDiskCache *)(*pcVar4)();
      return pFVar6;
    }
  }
  this->MaxDataSize = this->MaxDataSize - (ulonglong)(this->Journal).MaxSize & 0xfffffffffff00000;
  pIVar7 = IPlatformFile::GetPlatformPhysical();
  if ((this->BinPath).Data.ArrayNum != 0) {
    pwVar10 = (wchar_t *)(this->BinPath).Data.AllocatorInstance.Data;
  }
  pIVar8 = (IFileHandle *)(**(code **)((longlong)*pIVar7 + 0x110))(pIVar7,pwVar10,1);
  pIVar3 = (this->DataHandle).Ptr;
  if ((pIVar3 != pIVar8) && ((this->DataHandle).Ptr = pIVar8, pIVar3 != (IFileHandle *)0x0)) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  GCacheMaxBytes = this->MaxDataSize;
  return this;
}

// ~FDiskCache @ 1445a8380

void __thiscall UE::IoStore::JournaledCache::FDiskCache::~FDiskCache(FDiskCache *this)

{
  IFileHandle *pIVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  bool bVar6;
  
  pIVar1 = (this->Journal).JrnHandle.Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pFVar2 = (this->Journal).Entries.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar1 = (this->DataHandle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  *(undefined4 *)&(this->DataMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->DataMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DataMap);
  pFVar2 = (this->BinPath).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar5 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001445a8410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    return;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// ClosePhrase @ 1445b7430

void __thiscall
UE::IoStore::JournaledCache::FDiskCache::ClosePhrase(FDiskCache *this,FDiskPhrase *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  IFileHandle *pIVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  ushort uVar8;
  ulonglong uVar9;
  bool bVar10;
  
  iVar1 = param_1->Entries->ArrayNum;
  uVar2 = param_1->Index;
  if (param_1->Cursor == 0) {
    FDiskJournal::ClosePhrase(&this->Journal,param_1,0);
    return;
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId737,"IasCache::ClosePhrase",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
               ,0x2e1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId737);
  }
  if ((this->DataHandle).Ptr != (IFileHandle *)0x0) {
    uVar3 = param_1->Cursor;
    uVar9 = (ulonglong)uVar3;
    if ((this->MaxDataSize < this->DataCursor + uVar9) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataCursor + WriteSize <= MaxDataSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                           ,0x2eb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId751,"IasCache::DataWrite",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                 ,0x2ef);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId751);
    }
    pIVar4 = (this->DataHandle).Ptr;
    (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4,this->DataCursor);
    cVar7 = (**(code **)((longlong)*(this->DataHandle).Ptr + 0x30))();
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (cVar7 != '\0') {
      if (uVar9 != 0) {
        LOCK();
        GCacheWrittenBytes.Value = (atomic<__int64>)((longlong)GCacheWrittenBytes.Value + uVar9);
        UNLOCK();
        if (-1 < CountersChannel->Enabled) {
          if (GCacheWrittenBytes.CounterId == (atomic<unsigned_int>)0x0) {
            uVar8 = FCountersTrace::OutputInitCounter
                              (GCacheWrittenBytes.CounterName,TraceCounterType_Int,
                               GCacheWrittenBytes.CounterFlags & 0xf);
            LOCK();
            if (GCacheWrittenBytes.CounterId == (atomic<unsigned_int>)0x0) {
              GCacheWrittenBytes.CounterId._2_2_ = 0;
              GCacheWrittenBytes.CounterId._0_2_ = uVar8;
            }
            UNLOCK();
          }
          FCountersTrace::OutputSetValue
                    (GCacheWrittenBytes.CounterId._0_2_,(long64)GCacheWrittenBytes.Value);
        }
      }
      AcquireSRWLockExclusive((PSRWLOCK)this);
      Prune(this,this->DataCursor,uVar3);
      Insert(this,this->DataCursor,
             (FDataEntry *)
             ((param_1->Entries->AllocatorInstance).Data + (ulonglong)param_1->Index * 0x10),
             iVar1 - uVar2);
      ReleaseSRWLockExclusive((PSRWLOCK)this);
      FDiskJournal::ClosePhrase(&this->Journal,param_1,this->DataCursor);
      this->DataCursor = this->DataCursor + uVar9;
      goto LAB_1445b7666;
    }
  }
  FDiskPhrase::Drop(param_1);
  FDiskJournal::ClosePhrase(&this->Journal,param_1,0);
LAB_1445b7666:
  if (!bVar10) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// DebugVisit @ 1445c2b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall
UE::IoStore::JournaledCache::FDiskCache::DebugVisit
          (FDiskCache *this,void *param_1,_func___cdecl_void_void_ptr_FDebugCacheEntry_ptr *param_2)

{
  undefined1 *puVar1;
  TMap<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
  *pTVar2;
  ulong64 *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  void *pvVar8;
  _func___cdecl_void_void_ptr_FDebugCacheEntry_ptr *p_Var9;
  TMap<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
  *pTVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  TMap<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  void *local_98;
  _func___cdecl_void_void_ptr_FDebugCacheEntry_ptr *local_90;
  TMap<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FDebugCacheEntry local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_98 = param_1;
  local_90 = param_2;
  AcquireSRWLockShared((PSRWLOCK)this);
  iStack_c8 = 0;
  puVar1 = &(this->DataMap).field_0x10;
  pTVar2 = &this->DataMap;
  local_58.Key = 0;
  local_58.Size = 0;
  local_58._12_4_ = 0;
  iVar5 = *(int *)&(this->DataMap).field_0x28;
  uStack_c4 = 1;
  local_b0 = 0;
  iStack_b4 = 0;
  if (iVar5 != 0) {
    puVar17 = *(uint **)&(this->DataMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar12 = *puVar17;
    while (uVar12 == 0) {
      lVar13 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_1445c2c5d;
      uVar12 = puVar17[lVar13 + 1];
    }
    uStack_c4 = -uVar12 & uVar12;
    uVar4 = (ulonglong)uStack_c4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_a0 = (int)lVar13;
    iStack_b4 = local_b0 + -1 + local_a0;
    if (iVar5 < iStack_b4) {
      iStack_b4 = iVar5;
    }
  }
LAB_1445c2c5d:
  uVar12 = *(uint *)&(this->DataMap).field_0x28;
  uVar15 = uVar12 & 0xffffffe0;
  iStack_a8 = *(int *)&(this->DataMap).field_0x8 - *(int *)&(this->DataMap).field_0x34;
  uStack_b8 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_c4,iStack_c8);
  TStack_80.CurrentBitIndex = iStack_b4;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_80._28_4_ = iStack_b4;
  TStack_80.BaseBitIndex = local_b0;
  uStack_60 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = pTVar2;
  local_c0 = puVar1;
  iStack_ac = iStack_b4;
  local_88 = pTVar2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    uVar12 = (*pcVar7)();
    return uVar12;
  }
  p_Var9 = local_90;
  pvVar8 = local_98;
  uVar6 = *(uint *)&(this->DataMap).field_0x28;
  if (uVar12 != uVar6) {
    puVar16 = *(undefined1 **)&(this->DataMap).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar13 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1445c2d61;
      uVar12 = *(uint *)(puVar16 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar12 = (int)lVar13 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar12) {
      uVar12 = uVar6;
    }
  }
LAB_1445c2d61:
  while( true ) {
    pTVar10 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_d8);
    }
    if (((TStack_80.CurrentBitIndex == uVar12) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar2))
    break;
    puVar3 = (ulong64 *)(*(longlong *)pTVar10 + (longlong)TStack_80.CurrentBitIndex * 0x18);
    local_58.Key = *puVar3;
    local_58.Size = (uint)(puVar3[1] >> 0x27);
    (*p_Var9)(pvVar8,&local_58);
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  iVar5 = *(int *)&(this->DataMap).field_0x8;
  iVar14 = *(int *)&(this->DataMap).field_0x34;
  ReleaseSRWLockShared((PSRWLOCK)this);
  return iVar5 - iVar14;
}

// Drop @ 1445c8f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::IoStore::JournaledCache::FDiskCache::Drop(FDiskCache *this)

{
  IFileHandle *pIVar1;
  IPlatformFile *pIVar2;
  wchar_t *pwVar3;
  
  if (3 < (byte)LogIas._0_1_) {
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
  }
  pIVar1 = (this->DataHandle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (this->DataHandle).Ptr = (IFileHandle *)0x0;
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pIVar2 = IPlatformFile::GetPlatformPhysical();
  if ((this->BinPath).Data.ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(this->BinPath).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar2 + 0x88))(pIVar2,pwVar3);
  FDiskJournal::Drop(&this->Journal);
  this->DataCursor = 0;
  this->OverRemoval = 0;
  this->MappedBytes = 0;
  TSet<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>,FDefaultSetAllocator>
           *)&this->DataMap);
  FOnDemandIoBackendStats::OnCachePersistedBytes(GStatistics,this->MappedBytes);
  OpenDataFile(this);
  return;
}

// Evict @ 1445cacd0

bool __thiscall UE::IoStore::JournaledCache::FDiskCache::Evict(FDiskCache *this,ulong64 param_1)

{
  longlong lVar1;
  FOnDemandIoBackendStats *this_00;
  undefined1 *puVar2;
  bool bVar3;
  int iVar4;
  
  AcquireSRWLockExclusive((PSRWLOCK)this);
  this_00 = GStatistics;
  if (*(int *)&(this->DataMap).field_0x8 != *(int *)&(this->DataMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->DataMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->DataMap).field_0x38;
    }
    iVar4 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->DataMap).field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->DataMap + (longlong)iVar4 * 0x18;
        if (*(ulong64 *)(*(longlong *)&this->DataMap + (longlong)iVar4 * 0x18) == param_1) {
          this->MappedBytes = this->MappedBytes - (*(ulonglong *)(lVar1 + 8) >> 0x27);
          FOnDemandIoBackendStats::OnCachePersistedBytes(this_00,this->MappedBytes);
          TSet<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>,FDefaultSetAllocator>
                           *)&this->DataMap,iVar4);
          bVar3 = true;
          goto LAB_1445cad4b;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  bVar3 = false;
LAB_1445cad4b:
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return bVar3;
}

// Flush @ 1445cda30

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UE::IoStore::JournaledCache::FDiskCache::Flush(FDiskCache *this)

{
  IFileHandle *pIVar1;
  int iVar2;
  
  pIVar1 = (this->DataHandle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (this->DataHandle).Ptr = (IFileHandle *)0x0;
    (**(code **)*pIVar1)(pIVar1,1);
  }
  iVar2 = FDiskJournal::Flush(&this->Journal);
  AcquireSRWLockShared((PSRWLOCK)this);
  if (6 < (byte)LogIas._0_1_) {
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
  }
  ReleaseSRWLockShared((PSRWLOCK)this);
  OpenDataFile(this);
  return iVar2;
}

// GetAilments @ 1445d1370

uint __thiscall UE::IoStore::JournaledCache::FDiskCache::GetAilments(FDiskCache *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((this->Journal).JrnHandle.Ptr == (IFileHandle *)0x0);
  uVar2 = uVar1 | 2;
  if ((this->DataHandle).Ptr != (IFileHandle *)0x0) {
    uVar2 = uVar1;
  }
  return uVar2;
}

// Has @ 1445d93f0

bool __thiscall UE::IoStore::JournaledCache::FDiskCache::Has(FDiskCache *this,ulong64 param_1)

{
  FMapEntry *pFVar1;
  
  AcquireSRWLockShared((PSRWLOCK)this);
  pFVar1 = TMapBase<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
           ::Find((TMapBase<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
                   *)&this->DataMap,param_1);
  ReleaseSRWLockShared((PSRWLOCK)this);
  return pFVar1 != (FMapEntry *)0x0;
}

// Insert @ 1445dd6d0

long64 __thiscall
UE::IoStore::JournaledCache::FDiskCache::Insert
          (FDiskCache *this,ulong64 param_1,FDataEntry *param_2)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  FMapEntry *pFVar4;
  ulonglong uVar5;
  int iVar6;
  long64 lVar7;
  undefined1 *puVar8;
  TPairInitializer<unsigned___int64_const_&,UE::IoStore::JournaledCache::FDiskCache::FMapEntry_const_&>
  local_res18;
  FDataEntry *local_28;
  FMapEntry **local_20;
  
  uVar1 = param_2->Key;
  if (uVar1 == 0) {
    return 0;
  }
  if (param_2->Size == 0) {
    lVar7 = 0;
    pFVar4 = TMapBase<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
             ::Find((TMapBase<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
                     *)&this->DataMap,uVar1);
    if (pFVar4 != (FMapEntry *)0x0) {
      lVar7 = -pFVar4->Size;
    }
    if (*(int *)&(this->DataMap).field_0x8 != *(int *)&(this->DataMap).field_0x34) {
      puVar8 = *(undefined1 **)&(this->DataMap).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->DataMap).field_0x38;
      }
      iVar6 = *(int *)(puVar8 + ((longlong)((int)(uVar1 >> 0x20) * 0x17 + (int)uVar1) &
                                (longlong)*(int *)&(this->DataMap).field_0x48 - 1U) * 4);
      if (iVar6 != -1) {
        while (*(ulong64 *)(*(longlong *)&this->DataMap + (longlong)iVar6 * 0x18) != uVar1) {
          iVar6 = *(int *)(*(longlong *)&this->DataMap + 0x10 + (longlong)iVar6 * 0x18);
          if (iVar6 == -1) {
            return lVar7;
          }
        }
        TSet<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>,FDefaultSetAllocator>
        ::RemoveByIndex((TSet<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>,FDefaultSetAllocator>
                         *)&this->DataMap,iVar6);
      }
    }
    return lVar7;
  }
  uVar5 = param_2->Offset + param_1 & 0x7fffffffff;
  local_res18.Value = (FMapEntry *)(uVar5 | (ulonglong)local_res18.Value & 0xffffff8000000000);
  if (this->MaxDataSize <= uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value.DataCursor < MaxDataSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                       ,0x364,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      lVar7 = (*pcVar2)();
      return lVar7;
    }
  }
  local_res18.Value =
       (FMapEntry *)
       ((*(ulonglong *)&param_2->field_0x8 & 0xffffffffff800000) << 0x10 |
       (ulonglong)local_res18.Value & 0x7fffffffff);
  local_20 = &local_res18.Value;
  local_28 = param_2;
  TSet<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned___int64_const_&,UE::IoStore::JournaledCache::FDiskCache::FMapEntry_const_&>_>
            ((TSet<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>,FDefaultSetAllocator>
              *)&this->DataMap,&local_res18,(bool *)&local_28);
  return param_2->Size;
}

// Insert @ 1445dd880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __thiscall
UE::IoStore::JournaledCache::FDiskCache::Insert
          (FDiskCache *this,ulong64 param_1,FDataEntry *param_2,uint param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  ulong64 uVar6;
  long64 lVar7;
  atomic<__int64> aVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  FDataEntry local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar9 = 0;
  if (param_3 != 0) {
    uVar5 = param_2->Offset;
    uVar10 = (ulonglong)param_3;
    do {
      if (((longlong)(param_1 - uVar5) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("int64(DataBase - PartialBias) >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                             ,0x376,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      uVar1._0_6_ = *(undefined6 *)&param_2->field_0x8;
      uVar1._6_2_ = param_2->EntryCount;
      local_58.Key = param_2->Key;
      local_58._8_8_ =
           (ulonglong)(ZPULL(uVar1,0,0x17) - uVar5 & 0x7fffff) | uVar1 & 0xffffffffff800000;
      lVar7 = Insert(this,param_1 - uVar5,&local_58);
      lVar9 = lVar9 + lVar7;
      param_2 = param_2 + 1;
      uVar5 = 0;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  aVar8 = (atomic<__int64>)(this->MappedBytes + lVar9);
  this->MappedBytes = (ulong64)aVar8;
  if (GCacheCachedBytes.Value != aVar8) {
    LOCK();
    UNLOCK();
    GCacheCachedBytes.Value = aVar8;
    if (-1 < CountersChannel->Enabled) {
      if (GCacheCachedBytes.CounterId == (atomic<unsigned_int>)0x0) {
        uVar4 = FCountersTrace::OutputInitCounter
                          (GCacheCachedBytes.CounterName,TraceCounterType_Int,
                           GCacheCachedBytes.CounterFlags & 0xf);
        LOCK();
        if (GCacheCachedBytes.CounterId == (atomic<unsigned_int>)0x0) {
          GCacheCachedBytes.CounterId._2_2_ = 0;
          GCacheCachedBytes.CounterId._0_2_ = uVar4;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (GCacheCachedBytes.CounterId._0_2_,(long64)GCacheCachedBytes.Value);
    }
  }
  return this->MappedBytes;
}

// Materialize @ 1445e20a0

EIoErrorCode __thiscall
UE::IoStore::JournaledCache::FDiskCache::Materialize
          (FDiskCache *this,ulong64 param_1,FIoBuffer *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  BufCore *pBVar3;
  IFileHandle *pIVar4;
  char cVar5;
  ushort uVar6;
  FMapEntry *pFVar7;
  FIoBuffer *pFVar8;
  ulonglong uVar9;
  EIoErrorCode EVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  FIoBuffer local_38 [2];
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId805,"IasCache::Materialize_Disk",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
               ,0x325);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId805);
  }
  if ((this->DataHandle).Ptr == (IFileHandle *)0x0) {
    EVar10 = FileNotOpen;
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)this);
    pFVar7 = TMapBase<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
             ::Find((TMapBase<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
                     *)&this->DataMap,param_1);
    if (pFVar7 == (FMapEntry *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)this);
      EVar10 = NotFound;
    }
    else {
      uVar13 = pFVar7->DataCursor;
      uVar12 = pFVar7->Size - param_3;
      ReleaseSRWLockShared((PSRWLOCK)this);
      if (((param_2->CorePtr).Reference)->DataPtr == (uchar *)0x0) {
        pFVar8 = FIoBuffer::FIoBuffer(local_38,(ulonglong)uVar12);
        FIoBuffer::operator=(param_2,pFVar8);
        if (local_38[0].CorePtr.Reference != (BufCore *)0x0) {
          FIoBuffer::BufCore::CheckRefCount((BufCore *)local_38[0].CorePtr.Reference);
          LOCK();
          piVar1 = (int *)((longlong)local_38[0].CorePtr.Reference + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FIoBuffer::BufCore::~BufCore((BufCore *)local_38[0].CorePtr.Reference);
            ::operator_delete((void *)local_38[0].CorePtr.Reference,0x20);
          }
        }
      }
      pBVar3 = (param_2->CorePtr).Reference;
      if (pBVar3->DataSizeLow < uVar12) {
        uVar12 = pBVar3->DataSizeLow;
      }
      uVar9 = (**(code **)((longlong)*(this->DataHandle).Ptr + 0x50))();
      if (uVar9 < (ulonglong)param_3 + (ulonglong)uVar12 + uVar13) {
        EVar10 = ReadError;
      }
      else {
        lVar11 = param_3 + uVar13;
        if ((__GTraceCounterIasReadCursor.Value != lVar11) &&
           (__GTraceCounterIasReadCursor.Value = lVar11, -1 < CountersChannel->Enabled)) {
          if (__GTraceCounterIasReadCursor.CounterId == (atomic<unsigned_int>)0x0) {
            uVar6 = FCountersTrace::OutputInitCounter
                              (__GTraceCounterIasReadCursor.CounterName,TraceCounterType_Int,
                               __GTraceCounterIasReadCursor.CounterFlags & 0xf);
            LOCK();
            if (__GTraceCounterIasReadCursor.CounterId == (atomic<unsigned_int>)0x0) {
              __GTraceCounterIasReadCursor.CounterId._2_2_ = 0;
              __GTraceCounterIasReadCursor.CounterId._0_2_ = uVar6;
            }
            UNLOCK();
          }
          FCountersTrace::OutputSetValue
                    (__GTraceCounterIasReadCursor.CounterId._0_2_,__GTraceCounterIasReadCursor.Value
                    );
        }
        pIVar4 = (this->DataHandle).Ptr;
        (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4,lVar11);
        pIVar4 = (this->DataHandle).Ptr;
        cVar5 = (**(code **)((longlong)*pIVar4 + 0x20))
                          (pIVar4,((param_2->CorePtr).Reference)->DataPtr,uVar12);
        EVar10 = ReadError;
        if (cVar5 != '\0') {
          EVar10 = Ok;
        }
      }
    }
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar10;
}

// OpenDataFile @ 1445e7fa0

void __thiscall UE::IoStore::JournaledCache::FDiskCache::OpenDataFile(FDiskCache *this)

{
  IFileHandle *pIVar1;
  IPlatformFile *pIVar2;
  IFileHandle *pIVar3;
  wchar_t *pwVar4;
  
  pIVar2 = IPlatformFile::GetPlatformPhysical();
  if ((this->BinPath).Data.ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(this->BinPath).Data.AllocatorInstance.Data;
  }
  pIVar3 = (IFileHandle *)(**(code **)((longlong)*pIVar2 + 0x110))(pIVar2,pwVar4,1);
  pIVar1 = (this->DataHandle).Ptr;
  if ((pIVar1 != pIVar3) && ((this->DataHandle).Ptr = pIVar3, pIVar1 != (IFileHandle *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001445e7ffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// OpenPhrase @ 1445e8520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDiskPhrase * __thiscall
UE::IoStore::JournaledCache::FDiskCache::OpenPhrase
          (FDiskCache *this,FDiskPhrase *__return_storage_ptr__,uint param_1)

{
  int *piVar1;
  FDiskJournal *pFVar2;
  FScriptContainerElement *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDiskPhrase *pFVar8;
  uchar *puVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  FScriptContainerElement *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_38 [8];
  TArray<UE::IoStore::JournaledCache::FDataEntry,TSizedDefaultAllocator<32>_> *local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar2 = &this->Journal;
  if (((this->Journal).Cursor & 0xf) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Cursor & (sizeof(FDataEntry) - 1)) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                       ,0x21c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FDiskPhrase *)(*pcVar5)();
      return pFVar8;
    }
  }
  pFVar3 = (pFVar2->Entries).AllocatorInstance.Data;
  local_30 = (TArray<UE::IoStore::JournaledCache::FDataEntry,TSizedDefaultAllocator<32>_> *)0x0;
  uStack_28._0_4_ = 0;
  uStack_28._4_4_ = 0;
  if ((pFVar3 <= (FScriptContainerElement *)(local_38 + 8)) &&
     (lVar11 = (longlong)(this->Journal).Entries.ArrayMax,
     (FScriptContainerElement *)(local_38 + 8) < pFVar3 + lVar11 * 0x10)) {
    local_50 = (longlong)(this->Journal).Entries.ArrayNum;
    local_48 = 0x10;
    local_68 = local_38 + 8;
    local_60 = pFVar3;
    local_58 = lVar11;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FDiskPhrase *)(*pcVar5)();
      return pFVar8;
    }
  }
  iVar7 = (this->Journal).Entries.ArrayNum;
  piVar1 = &(this->Journal).Entries.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)pFVar2,piVar1);
  }
  (this->Journal).Entries.ArrayNum = iVar7 + 1;
  pFVar3 = (pFVar2->Entries).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
  *(TArray<UE::IoStore::JournaledCache::FDataEntry,TSizedDefaultAllocator<32>_> **)pFVar3 = local_30
  ;
  *(undefined8 *)(pFVar3 + 8) = uStack_28;
  iVar10 = ((this->Journal).MaxSize - (this->Journal).Cursor >> 4) -
           (this->Journal).Entries.ArrayNum;
  (__return_storage_ptr__->Buffer).Ptr = (uchar *)0x0;
  __return_storage_ptr__->Entries = &pFVar2->Entries;
  __return_storage_ptr__->Cursor = 0;
  __return_storage_ptr__->Index = (this->Journal).Entries.ArrayNum;
  iVar7 = 0xffff;
  if (iVar10 < 0xffff) {
    iVar7 = iVar10;
  }
  __return_storage_ptr__->MaxEntries = iVar7;
  puVar9 = operator_new__((ulonglong)param_1);
  if (__return_storage_ptr__ != (FDiskPhrase *)local_38) {
    puVar4 = (__return_storage_ptr__->Buffer).Ptr;
    (__return_storage_ptr__->Buffer).Ptr = puVar9;
    puVar9 = (uchar *)0x0;
    operator_delete__(puVar4);
  }
  operator_delete__(puVar9);
  return __return_storage_ptr__;
}

// Prune @ 1445ede20

void __thiscall
UE::IoStore::JournaledCache::FDiskCache::Prune(FDiskCache *this,ulong64 param_1,uint param_2)

{
  TMap<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
  *pTVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 local_a8 [32];
  longlong local_88;
  TSet<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>,FDefaultSetAllocator>
  *pTStack_80;
  longlong *local_78;
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  TSet<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>,FDefaultSetAllocator>
  *pTStack_50;
  TSet<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>,FDefaultSetAllocator>
  *local_48;
  undefined2 local_40;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId903,"IasCache::Prune",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
               ,0x387);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId903);
  }
  uVar6 = this->OverRemoval;
  if ((int)uVar6 < (int)param_2) {
    pTVar1 = &this->DataMap;
    this->OverRemoval = 0;
    lVar9 = 0;
    TSet<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_a8,
               (TSet<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_40 = 0;
    stack0xffffffffffffff98 = local_a8._16_16_;
    local_78 = (longlong *)local_a8._0_8_;
    auStack_70._0_8_ = local_a8._8_8_;
    local_58 = local_88;
    pTStack_50 = pTStack_80;
    uVar8 = local_a8._24_8_ >> 0x20;
    local_48 = (TSet<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_a8._28_4_ < *(int *)(local_a8._16_8_ + 0x18)) {
      while( true ) {
        iVar4 = (int)uVar8;
        lVar3 = *local_78;
        uVar8 = *(ulonglong *)(lVar3 + 8 + (longlong)iVar4 * 0x18);
        uVar7 = uVar8 & 0x7fffffffff;
        lVar2 = (uVar8 >> 0x27) + uVar7;
        lVar5 = lVar9;
        if ((longlong)uVar7 < (longlong)(param_2 + param_1) && (longlong)param_1 < lVar2) {
          TSet<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_50,iVar4);
          this->MappedBytes =
               this->MappedBytes - (*(ulonglong *)(lVar3 + (longlong)iVar4 * 0x18 + 8) >> 0x27);
          lVar5 = lVar2 - (param_2 + param_1);
          local_40 = CONCAT11(local_40._1_1_,1);
          if (lVar5 < lVar9) {
            lVar5 = lVar9;
          }
          uVar6 = uVar6 + ((int)lVar2 - (int)uVar7);
          if ((longlong)(int)param_2 <= (int)uVar6 - lVar5) {
            this->OverRemoval = (uint)lVar5;
            goto LAB_1445ee01a;
          }
        }
        uStack_60 = uStack_60 & ~auStack_70._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
        if (*(int *)(auStack_70._8_8_ + 0x18) <= (int)uStack_5c) break;
        uVar8 = (ulonglong)uStack_5c;
        lVar9 = lVar5;
      }
      if ((char)local_40 != '\0') {
LAB_1445ee01a:
        if (local_40._1_1_ != '\0') {
          uVar6 = *(int *)&(local_48->Elements).field_0x8 - *(int *)&(local_48->Elements).field_0x34
          ;
          if (uVar6 < 4) {
            iVar4 = 1;
          }
          else {
            uVar8 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
            lVar9 = 0x3f;
            if (uVar8 != 0) {
              for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar4 = 1 << ((byte)lVar9 & 0x1f);
          }
          if (((0 < (int)uVar6) && (local_48->HashSize < iVar4)) || (iVar4 < local_48->HashSize)) {
            local_48->HashSize = iVar4;
            TSet<TTuple<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>,FDefaultSetAllocator>
            ::Rehash(local_48);
          }
        }
      }
    }
  }
  else {
    this->OverRemoval = uVar6 - param_2;
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RemainingUntilWrap @ 1445f5ae0

ulong64 __thiscall UE::IoStore::JournaledCache::FDiskCache::RemainingUntilWrap(FDiskCache *this)

{
  ulonglong uVar1;
  
  uVar1 = this->DataCursor;
  if (this->MaxDataSize <= uVar1) {
    uVar1 = 0;
    this->OverRemoval = 0;
    this->DataCursor = 0;
  }
  return this->MaxDataSize - uVar1;
}

// Spam @ 144601140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::IoStore::JournaledCache::FDiskCache::Spam(FDiskCache *this)

{
  AcquireSRWLockShared((PSRWLOCK)this);
  if (6 < (byte)LogIas._0_1_) {
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
  }
                    /* WARNING: Could not recover jumptable at 0x0001446011a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)this);
  return;
}

// Wrap @ 1446100b0

void __thiscall UE::IoStore::JournaledCache::FDiskCache::Wrap(FDiskCache *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->MaxDataSize <= this->DataCursor) {
    this->OverRemoval = 0;
    this->DataCursor = 0;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("DataCursor >= MaxDataSize",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                     ,0x2d2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->OverRemoval = 0;
  this->DataCursor = 0;
  return;
}

