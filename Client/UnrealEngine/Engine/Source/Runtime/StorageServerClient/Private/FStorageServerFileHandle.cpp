// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 9

// Flush @ 148cc5c90

bool __thiscall FStorageServerFileHandle::Flush(FStorageServerFileHandle *this,bool param_1)

{
  return false;
}

// Read @ 148cd39f0

bool __thiscall
FStorageServerFileHandle::Read(FStorageServerFileHandle *this,uchar *param_1,long64 param_2)

{
  longlong lVar1;
  longlong local_res8;
  uchar *local_res18 [2];
  FIoChunkId local_28;
  
  FPlatformFileTrace::BeginRead((ulong64)param_1,(ulong64)this,this->FilePos,param_2);
  if (param_2 == 0) {
    FPlatformFileTrace::EndRead((ulong64)param_1,0);
    return true;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
      ::__l2::Instance.Cache.LookupSet.Elements._44_4_ = 0x80;
      `public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
      ::__l2::Instance.Cache.LookupSet.Elements._0_8_ = 0;
      `public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
      ::__l2::Instance.Cache.LookupSet.Elements._8_8_ = 0;
      `public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
      ::__l2::Instance.Cache.LookupSet.Elements._32_8_ = 0;
      `public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
      ::__l2::Instance.Cache.LookupSet.Elements._40_4_ = 0;
      `public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
      ::__l2::Instance.Cache.LookupSet.Elements._52_4_ = 0;
      `public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
      ::__l2::Instance.Cache.LookupSet.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      `public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
      ::__l2::Instance.Cache.LookupSet.HashSize = 0;
      `public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
      ::__l2::Instance.Cache.LeastRecent = (FCacheEntry *)0x0;
      `public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
      ::__l2::Instance.Cache.MostRecent = (FCacheEntry *)0x0;
      `public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
      ::__l2::Instance.Cache.LookupSet.Elements._48_4_ = 0xffffffff;
      `public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
      ::__l2::Instance.Cache.MaxNumElements = 0x10;
      TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::
      Empty(&`public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
             ::__l2::Instance.Cache,0x10);
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
                  ::__l2::Instance.CriticalSection,4000);
      atexit(`FStorageServerFileCache::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&`public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_28.Id._8_4_ = *(undefined4 *)((this->FileChunkId).Id + 8);
  local_28.Id._0_8_ = *(undefined8 *)(this->FileChunkId).Id;
  local_res8 = param_2;
  local_res18[0] = param_1;
  FStorageServerFileCache::ReadCached
            (&`public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
              ::__l2::Instance,(this->Owner->Connection).Ptr,&local_28,&this->FilePos,local_res18,
             &local_res8);
  lVar1 = local_res8;
  FPlatformFileTrace::EndRead((ulong64)param_1,param_2 - local_res8);
  return lVar1 == 0;
}

// ReadAt @ 148cd3b90

bool __thiscall
FStorageServerFileHandle::ReadAt
          (FStorageServerFileHandle *this,uchar *param_1,long64 param_2,long64 param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  long64 lVar4;
  size_t sVar5;
  longlong lVar6;
  size_t _Size;
  size_t _Size_00;
  
  if (param_2 == 0) {
    return true;
  }
  if (0x10000 < param_2) {
    lVar4 = FStorageServerPlatformFile::SendReadMessage
                      (this->Owner,param_1,&this->FileChunkId,param_3,param_2);
    if (lVar4 == param_2) {
      LOCK();
      CacheMissBytes = (atomic<unsigned___int64>)((longlong)CacheMissBytes + lVar4);
      UNLOCK();
      FCountersTrace::TCounter<double,1,std::atomic<double>,0>::Set
                (&__GTraceCounterStorageServerCache_HitRatioBytes,
                 (double)(ulonglong)CacheHitBytes /
                 (double)(ulonglong)((longlong)CacheHitBytes + (longlong)CacheMissBytes));
      return true;
    }
    return false;
  }
  lpCriticalSection = &this->BufferCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  _Size_00 = 0;
  if ((param_3 < this->BufferStart) || (this->BufferEnd <= param_3)) {
LAB_148cd3d96:
    lVar6 = _Size_00 + param_3;
    sVar5 = FStorageServerPlatformFile::SendReadMessage
                      (this->Owner,this->Buffer,&this->FileChunkId,lVar6,0x10000);
    this->BufferStart = lVar6;
    this->BufferEnd = lVar6 + sVar5;
    _Size = param_2 - _Size_00;
    if ((longlong)sVar5 < (longlong)(param_2 - _Size_00)) {
      _Size = sVar5;
    }
    memcpy(param_1 + _Size_00,this->Buffer,_Size);
    if (_Size_00 + _Size != param_2) {
      bVar2 = false;
      goto LAB_148cd3e6e;
    }
    LOCK();
    CacheMissBytes = (atomic<unsigned___int64>)((longlong)CacheMissBytes + _Size_00 + _Size);
    UNLOCK();
    FCountersTrace::TCounter<double,1,std::atomic<double>,0>::Set
              (&__GTraceCounterStorageServerCache_HitRatioBytes,
               (double)(ulonglong)CacheHitBytes /
               (double)(ulonglong)((longlong)CacheHitBytes + (longlong)CacheMissBytes));
  }
  else {
    lVar6 = param_3 - this->BufferStart;
    if ((0xffff < lVar6) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BufferOffset < BufferSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPlatformFile.cpp"
                           ,0x356,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    _Size_00 = param_2;
    if ((longlong)(0x10000U - lVar6) < param_2) {
      _Size_00 = 0x10000U - lVar6;
    }
    memcpy(param_1,(void *)((longlong)this + lVar6 + 0x50),_Size_00);
    LOCK();
    CacheHitBytes = (atomic<unsigned___int64>)((longlong)CacheHitBytes + _Size_00);
    UNLOCK();
    FCountersTrace::TCounter<double,1,std::atomic<double>,0>::Set
              (&__GTraceCounterStorageServerCache_HitRatioBytes,
               (double)(ulonglong)CacheHitBytes /
               (double)(ulonglong)((longlong)CacheHitBytes + (longlong)CacheMissBytes));
    if (_Size_00 != param_2) goto LAB_148cd3d96;
  }
  bVar2 = true;
LAB_148cd3e6e:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// Seek @ 148cdc480

bool __thiscall FStorageServerFileHandle::Seek(FStorageServerFileHandle *this,long64 param_1)

{
  this->FilePos = param_1;
  return true;
}

// SeekFromEnd @ 148cdc490

bool __thiscall FStorageServerFileHandle::SeekFromEnd(FStorageServerFileHandle *this,long64 param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar1 = this->_padding_;
  lVar3 = (**(code **)(lVar1 + 0x50))();
                    /* WARNING: Could not recover jumptable at 0x000148cdc4c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(lVar1 + 0x10))(this,param_1 + lVar3);
  return (bool)uVar2;
}

// Size @ 148cdfa10

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall FStorageServerFileHandle::Size(FStorageServerFileHandle *this)

{
  FStorageServerPlatformFile *pFVar1;
  long64 lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  
  lVar3 = this->FileSize;
  if (lVar3 < 0) {
    pFVar1 = this->Owner;
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2124,"StorageServerPlatformFileGetStatData",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPlatformFile.cpp"
                 ,0x84c);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2124);
    }
    lVar2 = FStorageServerConnection::ChunkSizeRequest((pFVar1->Connection).Ptr,&this->FileChunkId);
    bVar5 = -1 < lVar2;
    if (bVar5) {
      FDateTime::Now();
      FDateTime::Now();
      FDateTime::Now();
    }
    else {
      lVar2 = -1;
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar5) {
      this->FileSize = lVar2;
      return lVar2;
    }
    if (2 < (byte)LogStorageServerPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_virtual___int64___cdecl_FStorageServerFileHandle::Size(void)___ptr64'::
                  __l11::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
    }
    lVar3 = 0;
    this->FileSize = 0;
  }
  return lVar3;
}

// Tell @ 148ce0c10

long64 __thiscall FStorageServerFileHandle::Tell(FStorageServerFileHandle *this)

{
  return this->FilePos;
}

// Truncate @ 148ce0c40

bool __thiscall FStorageServerFileHandle::Truncate(FStorageServerFileHandle *this,long64 param_1)

{
  return false;
}

// Write @ 148ce39d0

bool __thiscall
FStorageServerFileHandle::Write(FStorageServerFileHandle *this,uchar *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPlatformFile.cpp"
                     ,0x375,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

