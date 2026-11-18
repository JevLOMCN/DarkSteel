// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 26

// FMallocBinned2 @ 141678d60

FMallocBinned2 * __thiscall FMallocBinned2::FMallocBinned2(FMallocBinned2 *this)

{
  ushort uVar1;
  ulong64 uVar2;
  code *pcVar3;
  TCachedOSPageAllocator<64,67108864> *pTVar4;
  FMallocBinned2 *pFVar5;
  FGenericPlatformMemoryConstants *pFVar6;
  void *pvVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  FPoolTable *pFVar13;
  ushort *puVar14;
  uint *puVar15;
  uchar *puVar16;
  bool bVar17;
  
  uVar9 = 0;
  this->_padding_ = (longlong)&___7FMallocBinnedCommonBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMallocBinned2__6B_;
  pFVar13 = this->SmallPoolTables;
  this->_padding_ = 0;
  lVar11 = 0x33;
  this->_padding_ = 0;
  do {
    (pFVar13->ActivePools).Front = (FPoolInfo *)0x0;
    (pFVar13->ExhaustedPools).Front = (FPoolInfo *)0x0;
    pFVar13->BinSize = 0;
    pFVar13->TotalUsedBins = 0;
    pFVar13->TotalAllocatedBins = 0;
    pFVar13->TotalAllocatedMem = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar13->Mutex,4000);
    pFVar13 = pFVar13 + 1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  pTVar4 = &this->CachedOSPageAllocator;
  lVar11 = 0x80;
  do {
    pTVar4->FreedPageBlocks[0].Ptr = (void *)0x0;
    pTVar4->FreedPageBlocks[0].ByteSize = 0;
    pTVar4 = (TCachedOSPageAllocator<64,67108864> *)(pTVar4->FreedPageBlocks + 1);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  bVar17 = bOnce != false;
  (this->CachedOSPageAllocator).CachedTotal = 0;
  (this->CachedOSPageAllocator).FreedPageBlocksNum = 0;
  if ((bVar17) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bOnce",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                          ,0x183,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FMallocBinned2 *)(*pcVar3)();
    return pFVar5;
  }
  SmallBinSizes[0] = SmallBinSizesInternal[0];
  SmallBinSizes[1] = SmallBinSizesInternal[1];
  SmallBinSizes[2] = SmallBinSizesInternal[2];
  SmallBinSizes[3] = SmallBinSizesInternal[3];
  SmallBinSizes[4] = SmallBinSizesInternal[4];
  SmallBinSizes[5] = SmallBinSizesInternal[5];
  SmallBinSizes[6] = SmallBinSizesInternal[6];
  SmallBinSizes[7] = SmallBinSizesInternal[7];
  SmallBinSizes[8] = SmallBinSizesInternal[8];
  SmallBinSizes[9] = SmallBinSizesInternal[9];
  SmallBinSizes[10] = SmallBinSizesInternal[10];
  SmallBinSizes[0xb] = SmallBinSizesInternal[0xb];
  SmallBinSizes[0xc] = SmallBinSizesInternal[0xc];
  SmallBinSizes[0xd] = SmallBinSizesInternal[0xd];
  SmallBinSizes[0xe] = SmallBinSizesInternal[0xe];
  SmallBinSizes[0xf] = SmallBinSizesInternal[0xf];
  SmallBinSizes[0x10] = SmallBinSizesInternal[0x10];
  SmallBinSizes[0x11] = SmallBinSizesInternal[0x11];
  SmallBinSizes[0x12] = SmallBinSizesInternal[0x12];
  SmallBinSizes[0x13] = SmallBinSizesInternal[0x13];
  SmallBinSizes[0x14] = SmallBinSizesInternal[0x14];
  SmallBinSizes[0x15] = SmallBinSizesInternal[0x15];
  SmallBinSizes[0x16] = SmallBinSizesInternal[0x16];
  SmallBinSizes[0x17] = SmallBinSizesInternal[0x17];
  SmallBinSizes[0x18] = SmallBinSizesInternal[0x18];
  SmallBinSizes[0x19] = SmallBinSizesInternal[0x19];
  SmallBinSizes[0x1a] = SmallBinSizesInternal[0x1a];
  SmallBinSizes[0x1b] = SmallBinSizesInternal[0x1b];
  SmallBinSizes[0x1c] = SmallBinSizesInternal[0x1c];
  SmallBinSizes[0x1d] = SmallBinSizesInternal[0x1d];
  SmallBinSizes[0x1e] = SmallBinSizesInternal[0x1e];
  SmallBinSizes[0x1f] = SmallBinSizesInternal[0x1f];
  SmallBinSizes[0x30] = SmallBinSizesInternal[0x30];
  SmallBinSizes[0x31] = SmallBinSizesInternal[0x31];
  SmallBinSizes[0x32] = SmallBinSizesInternal[0x32];
  SmallBinSizes[0x20] = SmallBinSizesInternal[0x20];
  SmallBinSizes[0x21] = SmallBinSizesInternal[0x21];
  SmallBinSizes[0x22] = SmallBinSizesInternal[0x22];
  SmallBinSizes[0x23] = SmallBinSizesInternal[0x23];
  SmallBinSizes[0x24] = SmallBinSizesInternal[0x24];
  SmallBinSizes[0x25] = SmallBinSizesInternal[0x25];
  SmallBinSizes[0x26] = SmallBinSizesInternal[0x26];
  SmallBinSizes[0x27] = SmallBinSizesInternal[0x27];
  SmallBinSizes[0x28] = SmallBinSizesInternal[0x28];
  SmallBinSizes[0x29] = SmallBinSizesInternal[0x29];
  SmallBinSizes[0x2a] = SmallBinSizesInternal[0x2a];
  SmallBinSizes[0x2b] = SmallBinSizesInternal[0x2b];
  SmallBinSizes[0x2c] = SmallBinSizesInternal[0x2c];
  SmallBinSizes[0x2d] = SmallBinSizesInternal[0x2d];
  SmallBinSizes[0x2e] = SmallBinSizesInternal[0x2e];
  SmallBinSizes[0x2f] = SmallBinSizesInternal[0x2f];
  bOnce = true;
  pFVar6 = FWindowsPlatformMemory::GetConstants();
  uVar8 = (uint)pFVar6->BinnedPageSize;
  uVar2 = pFVar6->AddressStart;
  uVar12 = pFVar6->AddressLimit;
  FMallocBinnedCommonBase::OsAllocationGranularity = uVar8;
  if (pFVar6->BinnedAllocationGranularity != 0) {
    FMallocBinnedCommonBase::OsAllocationGranularity = (uint)pFVar6->BinnedAllocationGranularity;
  }
  GMB2PageSize = uVar8;
  this->_padding_ = (ulonglong)(uVar8 >> 5);
  FMallocBinnedCommonBase::FPtrToPoolMapping::Init
            ((FPtrToPoolMapping *)&this->_padding_,uVar8,(ulonglong)(uVar8 >> 5),uVar2,uVar12);
  if (((uVar8 & uVar8 - 1) != 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("FMath::IsPowerOfTwo(GMB2PageSize)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                          ,0x191,L"OS page size must be a power of two"), bVar17)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FMallocBinned2 *)(*pcVar3)();
    return pFVar5;
  }
  if ((uVar12 <= GMB2PageSize) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Constants.AddressLimit > GMB2PageSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                          ,0x192,L"OS address limit must be greater than the page size"), bVar17)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FMallocBinned2 *)(*pcVar3)();
    return pFVar5;
  }
  if (((GMB2PageSize & 0xffff) != 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("GMB2PageSize % 65536 == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                          ,0x193,L"OS page size must be a multiple of UE_MB2_LARGE_ALLOC"), bVar17))
  {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FMallocBinned2 *)(*pcVar3)();
    return pFVar5;
  }
  puVar14 = SmallBinSizes;
  puVar15 = &this->SmallPoolTables[0].BinSize;
  uVar12 = uVar9;
  while( true ) {
    iVar10 = (int)uVar12;
    if (((iVar10 != 0) && (*puVar14 <= SmallBinSizes[iVar10 - 1])) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == 0 || SmallBinSizes[Index - 1] < SmallBinSizes[Index]",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                            ,0x19c,L"Small bin sizes must be strictly increasing"), bVar17)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FMallocBinned2 *)(*pcVar3)();
      return pFVar5;
    }
    if ((GMB2PageSize < *puVar14) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("SmallBinSizes[Index] <= GMB2PageSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                            ,0x19d,L"Small bin size must be small enough to fit into a page"),
       bVar17)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FMallocBinned2 *)(*pcVar3)();
      return pFVar5;
    }
    if (((*puVar14 & 7) != 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("SmallBinSizes[Index] % 8 == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                            ,0x19e,L"Small bin size must be a multiple of UE_MBC_MINIMUM_ALIGNMENT")
       , bVar17)) break;
    uVar12 = (ulonglong)(iVar10 + 1U);
    *puVar15 = (uint)*puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 0x12;
    if (iVar10 + 1U == 0x33) {
      puVar16 = MemSizeToPoolIndex;
      uVar12 = uVar9;
      while( true ) {
        uVar1 = SmallBinSizes[uVar9];
        while ((uint)uVar1 < (uint)((int)uVar12 * 8)) {
          uVar8 = (uint)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          if ((uVar8 == 0x33) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PoolIndex != 51",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                                  ,0x1ac,L""), bVar17)) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMallocBinned2 *)(*pcVar3)();
            return pFVar5;
          }
          uVar1 = SmallBinSizes[uVar9];
        }
        if ((0xff < (uint)uVar9) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("PoolIndex < 256",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                                ,0x1ae,L""), bVar17)) break;
        *puVar16 = (uchar)uVar9;
        uVar8 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar8;
        puVar16 = puVar16 + 1;
        if (uVar8 == 0xfff) {
          uVar2 = this->_padding_;
          uVar9 = ((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1) + uVar2 * 0x20 &
                  ~((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1);
          pvVar7 = AllocateMetaDataMemory(uVar9);
          this->_padding_ = (longlong)pvVar7;
          FMallocBinnedCommonBase::HashMemory = FMallocBinnedCommonBase::HashMemory + uVar9;
          if ((this->_padding_ == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("HashBuckets",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                                  ,0x3f7,L""), bVar17)) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FMallocBinned2 *)(*pcVar3)();
            return pFVar5;
          }
          DefaultConstructItems<TMallocBinnedCommon<FMallocBinned2,51,32752>::FPoolHashBucket,unsigned___int64>
                    ((void *)this->_padding_,uVar2);
          MallocBinned2 = this;
          GFixedMallocLocationPtr = (FMalloc **)&MallocBinned2;
          return this;
        }
      }
      pcVar3 = (code *)swi(3);
      pFVar5 = (FMallocBinned2 *)(*pcVar3)();
      return pFVar5;
    }
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FMallocBinned2 *)(*pcVar3)();
  return pFVar5;
}

// ~FMallocBinned2 @ 14167bf30

/* WARNING: Type propagation algorithm not settling */

void __thiscall FMallocBinned2::~FMallocBinned2(FMallocBinned2 *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7FMallocBinned2__6B_;
  lpCriticalSection = (LPCRITICAL_SECTION)((this->CachedOSPageAllocator).FreedPageBlocks + 2);
  lVar1 = 0x33;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)((longlong)(lpCriticalSection + 0xfffffffffffffffe) + 8)
    ;
    DeleteCriticalSection(lpCriticalSection);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  FExec::~FExec((FExec *)this);
  return;
}

// AllocateMetaDataMemory @ 141681690

void * __cdecl FMallocBinned2::AllocateMetaDataMemory(ulong64 param_1)

{
  FLLMTracker *this;
  bool bVar1;
  FLowLevelMemTracker *pFVar2;
  FTagData *pFVar3;
  FLLMThreadState *this_00;
  void *pvVar4;
  ELLMTagSet local_res8;
  
  bVar1 = false;
  if ((FLowLevelMemTracker::EnabledState != Disabled) &&
     (pFVar2 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState != Disabled)) {
    FLowLevelMemTracker::BootstrapInitialise(pFVar2);
    this = pFVar2->Trackers[0];
    bVar1 = true;
    local_res8 = None;
    pFVar3 = FLowLevelMemTracker::FindOrAddTagData(this->LLMRef,FMalloc,Scope);
    this_00 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this);
    UE::LLMPrivate::FLLMThreadState::PushTag(this_00,pFVar3,None);
  }
  pvVar4 = FWindowsPlatformMemory::BinnedAllocFromOS
                     (((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1) + param_1 &
                      ~((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1));
  if (bVar1) {
    pFVar2 = FLowLevelMemTracker::Get();
    UE::LLMPrivate::FLLMTracker::PopTag(pFVar2->Trackers[local_res8],local_res8);
  }
  return pvVar4;
}

// CanaryFail @ 14168a210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinned2::CanaryFail(FMallocBinned2 *this,FFreeBlock *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  return;
}

// DumpAllocatorStats @ 14168e790

void __thiscall FMallocBinned2::DumpAllocatorStats(FMallocBinned2 *this,FOutputDevice *param_1)

{
  longlong lVar1;
  
  TMallocBinnedCommon<FMallocBinned2,51,32752>::GetTotalAllocatedSmallPoolMemory
            ((TMallocBinnedCommon<FMallocBinned2,51,32752> *)this);
  FOutputDevice::Log(param_1,L"FMallocBinned2 Mem report");
  FOutputDevice::LogfImpl(param_1,L"Constants.BinnedPageSize = %d");
  FOutputDevice::LogfImpl(param_1,L"Constants.BinnedAllocationGranularity = %d");
  FOutputDevice::LogfImpl(param_1,L"Small Pool Allocations: %fmb  (including bin size padding)");
  FOutputDevice::LogfImpl(param_1,L"Small Pool OS Allocated: %fmb");
  FOutputDevice::LogfImpl(param_1,L"Large Pool Requested Allocations: %fmb");
  FOutputDevice::LogfImpl(param_1,L"Large Pool OS Allocated: %fmb");
  FOutputDevice::LogfImpl(param_1,L"Requested Allocations: %fmb");
  FOutputDevice::LogfImpl(param_1,L"OS Allocated: %fmb");
  FOutputDevice::LogfImpl(param_1,L"PoolInfo: %fmb");
  FOutputDevice::LogfImpl(param_1,L"Hash: %fmb");
  FOutputDevice::LogfImpl(param_1,L"TLS: %fmb");
  FOutputDevice::LogfImpl(param_1,L"Total allocated from OS: %fmb");
  FOutputDevice::LogfImpl(param_1,L"Cached free OS pages: %fmb");
  lVar1 = 0x33;
  do {
    FOutputDevice::LogfImpl
              (param_1,
               L"Bin %6d Fragmentation %d %%, Wasted Mem %.2f MB, Total Allocated Mem %.2f MB");
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

// FlushCurrentThreadCacheInternal @ 141695890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinned2::FlushCurrentThreadCacheInternal(FMallocBinned2 *this,bool param_1)

{
  int *piVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FPerThreadFreeBlockLists *pFVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  bool bVar13;
  LARGE_INTEGER LStackX_18;
  FName FStackX_20;
  FStatMessage aFStack_58 [3];
  
  if (FMallocBinnedCommonBase::BinnedTlsSlot == 0xffffffff) {
    return;
  }
  pFVar6 = TlsGetValue(FMallocBinnedCommonBase::BinnedTlsSlot);
  if (pFVar6 == (FPerThreadFreeBlockLists *)0x0) {
    return;
  }
  if (pFVar6->bLockedByOwnerThread == false) {
    return;
  }
  if (pFVar6->MemoryTrimEpoch < (ulonglong)this->_padding_) {
    pFVar6->MemoryTrimEpoch = this->_padding_;
  }
  else if (param_1) {
    return;
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>(FMallocBinned2&___ptr64,bool)'
                ::__l8::__CpuProfilerEventSpecId125,
               "FMallocBinnedCommonUtils::FlushCurrentThreadCache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommonUtils.h"
               ,0x7d);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>(FMallocBinned2&___ptr64,bool)'
               ::__l8::__CpuProfilerEventSpecId125);
  }
  FVar12.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>(FMallocBinned2&___ptr64,bool)'
       ::__l8::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>(FMallocBinned2&___ptr64,bool)'
                           ::__l8::_thread_safe_static_guard_0__),
     `public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>(FMallocBinned2&___ptr64,bool)'
     ::__l8::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName((FName *)&LStackX_18.s,
                            "STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>(FMallocBinned2&___ptr64,bool)'
                ::__l8::StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache,*pFVar7,
               L"STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>(FMallocBinned2&___ptr64,bool)'
                         ::__l8::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache;
  if (_StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&FStackX_20,"STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>(FMallocBinned2&___ptr64,bool)'
                         ::__l8::StatPtr_STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache,
                        *pFVar7,L"STAT_FMallocBinnedCommonUtils_FlushCurrentThreadCache",
                        "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_18.s,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_18.s.LowPart = FVar10.Value;
        LStackX_18.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_18.s,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommonUtils.h"
                   ,0x7e);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_18.s.LowPart = FVar10.Value;
      LStackX_18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_141672046;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_141672046:
  QueryPerformanceCounter(&LStackX_18);
  dVar2 = (double)CONCAT44(LStackX_18.s.HighPart,LStackX_18.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle;
  FMallocBinnedCommonUtils::TrimThreadFreeBlockLists<FMallocBinned2>(this,pFVar6);
  QueryPerformanceCounter(&LStackX_18);
  if (((double)GMallocBinnedFlushThreadCacheMaxWaitTime <
       (double)CONCAT44(LStackX_18.s.HighPart,LStackX_18.s.LowPart) *
       FGenericPlatformTime::SecondsPerCycle - dVar2) && (2 < (byte)LogMemory._0_1_)) {
    (**(code **)(this->_padding_ + 200))(this);
    UE::Logging::Private::BasicLog<3>
              (&`public:_static_void___cdecl_FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>(FMallocBinned2&___ptr64,bool)'
                ::__l12::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      aFStack_58[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      aFStack_58[0].NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&LStackX_18);
      aFStack_58[0].StatData.Pad[4] = '\0';
      aFStack_58[0].StatData.Pad[5] = '\0';
      aFStack_58[0].StatData.Pad[6] = '\0';
      aFStack_58[0].StatData.Pad[7] = '\0';
      aFStack_58[0].StatData.Pad[0] = LStackX_18.s.LowPart._0_1_;
      aFStack_58[0].StatData.Pad[1] = LStackX_18.s.LowPart._1_1_;
      aFStack_58[0].StatData.Pad[2] = LStackX_18.s.LowPart._2_1_;
      aFStack_58[0].StatData.Pad[3] = LStackX_18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,aFStack_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Free @ 141695b70

/* WARNING: Removing unreachable block (ram,0x000141695c95) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinned2::Free(FMallocBinned2 *this,void *param_1)

{
  FBundleNode **ppFVar1;
  FFreeBlock *pFVar2;
  byte bVar3;
  ushort uVar4;
  FBundleNode *pFVar5;
  FFreeBlock *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong *plVar9;
  FBundleNode *pFVar10;
  FPoolInfo *pFVar11;
  LPVOID pvVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  ulonglong uVar16;
  FBundleNode *pFVar18;
  FBundleNode *pFVar17;
  
  if ((short)param_1 == 0) {
    if (param_1 == (void *)0x0) {
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
    pFVar11 = TMallocBinnedCommon<FMallocBinned2,51,32752>::Internal::FindPoolInfo(this,param_1);
    if (pFVar11 == (FPoolInfo *)0x0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    if (pFVar11->Canary != FirstFreeBlockIsOSAllocSize) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    pFVar6 = pFVar11->FirstFreeBlock;
    pFVar2 = (FFreeBlock *)((ulonglong)pFVar11->AllocSize * 8);
    LOCK();
    FMallocBinnedCommonBase::AllocatedLargePoolMemory =
         (atomic<__int64>)
         ((longlong)FMallocBinnedCommonBase::AllocatedLargePoolMemory +
         (ulonglong)pFVar11->AllocSize * -8);
    UNLOCK();
    LOCK();
    FMallocBinnedCommonBase::AllocatedLargePoolMemoryWAlignment =
         (atomic<__int64>)
         ((longlong)FMallocBinnedCommonBase::AllocatedLargePoolMemoryWAlignment - (longlong)pFVar6);
    UNLOCK();
    if ((pFVar6 <= pFVar2 && (longlong)pFVar2 - (longlong)pFVar6 != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("PoolOSRequestedBytes <= PoolOsBytes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                           ,0x334,L"FMallocBinned2::Free %d %d"), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((pFVar11->Canary != FirstFreeBlockIsOSAllocSize) && (pFVar11->Canary != FirstFreeBlockIsPtr)
       ) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    pFVar11->Canary = Unassigned;
    if (((FMallocBinnedCommonBase::BinnedTlsSlot == 0xffffffff) ||
        (pvVar12 = TlsGetValue(FMallocBinnedCommonBase::BinnedTlsSlot), pvVar12 == (LPVOID)0x0)) ||
       (*(char *)((longlong)pvVar12 + 0x678) == '\0')) {
      pvVar12 = (LPVOID)0x0;
    }
    FCachedOSPageAllocator::FreeImpl
              ((FCachedOSPageAllocator *)&this->CachedOSPageAllocator,param_1,(ulong64)pFVar6,
               ((pvVar12 != (LPVOID)0x0) + 1) * 0x40,0x4000000,
               (this->CachedOSPageAllocator).FreedPageBlocks,
               &(this->CachedOSPageAllocator).FreedPageBlocksNum,
               &(this->CachedOSPageAllocator).CachedTotal,(FWindowsRecursiveMutex *)&this->_padding_
               ,pvVar12 != (LPVOID)0x0);
                    /* WARNING: Could not recover jumptable at 0x000141695f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
    return;
  }
  if ((param_1 == (void *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                         ,0x2fb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puVar15 = (ushort *)((ulonglong)param_1 & 0xffffffffffff0000);
  if (*(char *)((longlong)puVar15 + 3) != -0x1d) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  uVar4 = *puVar15;
  bVar3 = (byte)puVar15[1];
  uVar16 = (ulonglong)bVar3;
  uVar14 = (uint)bVar3;
  uVar13 = (uint)bVar3;
  if (((FMallocBinnedCommonBase::BinnedTlsSlot == 0xffffffff) ||
      (plVar9 = TlsGetValue(FMallocBinnedCommonBase::BinnedTlsSlot), plVar9 == (longlong *)0x0)) ||
     ((char)plVar9[0xcf] == '\0')) {
    *(ulonglong *)param_1 = *(ulonglong *)param_1 & 0xffff000000000000;
    plVar9 = (longlong *)0x0;
    goto LAB_141695d95;
  }
  pFVar18 = (FBundleNode *)0x0;
  if (plVar9[(ulonglong)uVar13 * 4 + 5] != 0) {
    *(char *)(plVar9[(ulonglong)uVar13 * 4 + 5] + 6) = (char)plVar9[(ulonglong)uVar13 * 4 + 6];
    pFVar5 = (FBundleNode *)plVar9[(ulonglong)uVar13 * 4 + 5];
    pFVar17 = pFVar18;
    do {
      pFVar10 = pFVar17 + uVar16;
      ppFVar1 = Private::GGlobalRecycler.Bundles[0].FreeBundles + (longlong)pFVar10;
      if (Private::GGlobalRecycler.Bundles[0].FreeBundles[(longlong)pFVar10] == (FBundleNode *)0x0)
      {
        LOCK();
        bVar8 = *ppFVar1 == (FBundleNode *)0x0;
        if (bVar8) {
          *ppFVar1 = pFVar5;
        }
        UNLOCK();
        if (bVar8) goto LAB_141695ccf;
      }
      uVar14 = (int)pFVar17 + 1;
      pFVar17 = (FBundleNode *)(ulonglong)uVar14;
    } while (uVar14 < 8);
    pFVar18 = (FBundleNode *)plVar9[(ulonglong)uVar13 * 4 + 5];
LAB_141695ccf:
    uVar16 = (ulonglong)uVar13;
    plVar9[(ulonglong)uVar13 * 4 + 5] = 0;
    *(undefined4 *)(plVar9 + (ulonglong)uVar13 * 4 + 6) = 0;
  }
  uVar14 = (uint)uVar16;
  if ((int)plVar9[uVar16 * 4 + 4] * (uint)uVar4 < 0x10000 &&
      *(uint *)(plVar9 + uVar16 * 4 + 4) < 0x40) {
LAB_141695d56:
    *(ulonglong *)param_1 =
         (plVar9[uVar16 * 4 + 3] ^ *(ulonglong *)param_1) & 0xffff000000000000 ^
         plVar9[uVar16 * 4 + 3];
    *(int *)(plVar9 + uVar16 * 4 + 4) = (int)plVar9[uVar16 * 4 + 4] + 1;
    plVar9[uVar16 * 4 + 3] = (longlong)param_1;
  }
  else {
    if (plVar9[uVar16 * 4 + 5] == 0) {
      plVar9[uVar16 * 4 + 5] = plVar9[uVar16 * 4 + 3];
      plVar9[uVar16 * 4 + 6] = plVar9[uVar16 * 4 + 4];
      plVar9[uVar16 * 4 + 3] = 0;
      *(undefined4 *)(plVar9 + uVar16 * 4 + 4) = 0;
      goto LAB_141695d56;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("bPushed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                       ,0x30f,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  *plVar9 = *plVar9 - (ulonglong)(uint)uVar4;
  param_1 = pFVar18;
LAB_141695d95:
  if ((param_1 != (FBundleNode *)0x0) &&
     (Private::FreeBundles(this,param_1,uVar14), plVar9 == (longlong *)0x0)) {
    LOCK();
    FMallocBinnedCommonBase::AllocatedSmallPoolMemory =
         (atomic<__int64>)
         ((longlong)FMallocBinnedCommonBase::AllocatedSmallPoolMemory - (ulonglong)uVar4);
    UNLOCK();
  }
  return;
}

// FreeBundles @ 1416963e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinned2::FreeBundles(FMallocBinned2 *this,FBundleNode *param_1,uint param_2)

{
  FPoolInfo **ppFVar1;
  FPoolTable *pFVar2;
  EBlockCanary EVar3;
  uint uVar4;
  ulonglong uVar5;
  FPoolInfo *pFVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  FPoolInfo *pFVar14;
  ulonglong uVar15;
  
  uVar4 = this->SmallPoolTables[param_2].BinSize;
  pFVar2 = this->SmallPoolTables + param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)&pFVar2->Mutex);
  do {
    uVar5._0_2_ = ((FFreeBlock *)param_1)->BinSize;
    uVar5._2_1_ = ((FFreeBlock *)param_1)->PoolIndex;
    uVar5._3_1_ = ((FFreeBlock *)param_1)->CanaryAndForkState;
    uVar5._4_4_ = ((FFreeBlock *)param_1)->NumFreeBins;
    if (param_1 < (FFreeBlock *)this->_padding_) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(UPTRINT)InPtr >= AddressSpaceBase",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                         ,0xec,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar15 = (longlong)param_1 - this->_padding_;
    uVar13 = uVar15 >> ((byte)this->_padding_ & 0x3f);
    puVar12 = (ulonglong *)
              (((ulonglong)((int)this->_padding_ - 1) & uVar13 & 0xffffffff) * 0x20 +
              this->_padding_);
    puVar11 = puVar12;
    do {
      if (*puVar11 == uVar13) {
        pFVar14 = (FPoolInfo *)
                  ((ulonglong)
                   ((uint)(uVar15 >> ((byte)this->_padding_ & 0x3f)) & (uint)this->_padding_) * 0x20
                  + puVar11[1]);
        if (pFVar14 == (FPoolInfo *)0x0) goto LAB_1416964e3;
        goto LAB_1416964f9;
      }
      puVar11 = (ulonglong *)puVar11[3];
    } while (puVar11 != puVar12);
    pFVar14 = (FPoolInfo *)0x0;
LAB_1416964e3:
    UE::Logging::Private::BasicFatalLog
              (&`public:_static_void___cdecl_FMallocBinned2::Private::FreeBundles(FMallocBinned2&___ptr64,FMallocBinnedCommonBase::FBundleNode*___ptr64,unsigned_int)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMemory);
LAB_1416964f9:
    if (pFVar14->Canary != FirstFreeBlockIsPtr) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    if (pFVar14->FirstFreeBlock == (FFreeBlock *)0x0) {
      ppFVar1 = &pFVar14->Next;
      if (pFVar14->Next != (FPoolInfo *)0x0) {
        pFVar14->Next->PtrToPrevNext = pFVar14->PtrToPrevNext;
      }
      *pFVar14->PtrToPrevNext = *ppFVar1;
      pFVar6 = (pFVar2->ActivePools).Front;
      if (pFVar6 != (FPoolInfo *)0x0) {
        pFVar6->PtrToPrevNext = ppFVar1;
      }
      *ppFVar1 = (pFVar2->ActivePools).Front;
      pFVar14->PtrToPrevNext = (FPoolInfo **)pFVar2;
      (pFVar2->ActivePools).Front = pFVar14;
    }
    else {
      EVar3 = pFVar14->FirstFreeBlock->CanaryAndForkState;
      if ((EVar3 != Zero) && (EVar3 != Value)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NodePool->FirstFreeBlock->CanaryAndForkState == EBlockCanary::Zero || NodePool->FirstFreeBlock->CanaryAndForkState == Allocator.CurrentCanary"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                           ,0x106,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    ((FFreeBlock *)param_1)->NumFreeBins = 1;
    ((FFreeBlock *)param_1)->NextFreeBlock = pFVar14->FirstFreeBlock;
    ((FFreeBlock *)param_1)->BinSize = (ushort)uVar4;
    ((FFreeBlock *)param_1)->CanaryAndForkState = Value;
    ((FFreeBlock *)param_1)->PoolIndex = (uchar)param_2;
    pFVar14->FirstFreeBlock = (FFreeBlock *)param_1;
    pFVar2->TotalUsedBins = pFVar2->TotalUsedBins - 1;
    if (pFVar14->Taken == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodePool->Taken >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                         ,0x115,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar14->Taken = pFVar14->Taken - 1;
    if (pFVar14->Taken == 0) {
      if ((pFVar14->Canary != FirstFreeBlockIsOSAllocSize) &&
         (pFVar14->Canary != FirstFreeBlockIsPtr)) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
      }
      pFVar14->Canary = Unassigned;
      if (pFVar14->Next != (FPoolInfo *)0x0) {
        pFVar14->Next->PtrToPrevNext = pFVar14->PtrToPrevNext;
      }
      *pFVar14->PtrToPrevNext = pFVar14->Next;
      EnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
      FCachedOSPageAllocator::FreeImpl
                ((FCachedOSPageAllocator *)&this->CachedOSPageAllocator,
                 (void *)((ulonglong)param_1 & 0xffffffffffff0000),(ulonglong)GMB2PageSize,0x40,
                 0x4000000,(this->CachedOSPageAllocator).FreedPageBlocks,
                 &(this->CachedOSPageAllocator).FreedPageBlocksNum,
                 &(this->CachedOSPageAllocator).CachedTotal,(FWindowsRecursiveMutex *)0x0,false);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
      uVar8 = GMB2PageSize;
      uVar13 = (ulonglong)GMB2PageSize;
      uVar10 = GMB2PageSize / uVar4;
      if ((ulonglong)GMB2PageSize < (ulonglong)(uVar10 * uVar4) + 0x10) {
        uVar10 = uVar10 - 1;
      }
      pFVar2->TotalAllocatedBins = pFVar2->TotalAllocatedBins - uVar10;
      pFVar2->TotalAllocatedMem = pFVar2->TotalAllocatedMem - uVar8;
      LOCK();
      FMallocBinnedCommonBase::AllocatedOSSmallPoolMemory =
           (atomic<__int64>)((longlong)FMallocBinnedCommonBase::AllocatedOSSmallPoolMemory - uVar13)
      ;
      UNLOCK();
    }
    param_1 = (FBundleNode *)(uVar5 & 0xffffffffffff);
    if ((FFreeBlock *)(uVar5 & 0xffffffffffff) == (FFreeBlock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141696714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar2->Mutex);
      return;
    }
  } while( true );
}

// FreeBundles @ 141696400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FMallocBinned2::Private::FreeBundles(FMallocBinned2 *param_1,FBundleNode *param_2,uint param_3)

{
  FPoolInfo **ppFVar1;
  FPoolTable *pFVar2;
  EBlockCanary EVar3;
  uint uVar4;
  ulonglong uVar5;
  FPoolInfo *pFVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  FPoolInfo *pFVar14;
  ulonglong uVar15;
  
  uVar4 = param_1->SmallPoolTables[param_3].BinSize;
  pFVar2 = param_1->SmallPoolTables + param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)&pFVar2->Mutex);
  do {
    uVar5._0_2_ = ((FFreeBlock *)param_2)->BinSize;
    uVar5._2_1_ = ((FFreeBlock *)param_2)->PoolIndex;
    uVar5._3_1_ = ((FFreeBlock *)param_2)->CanaryAndForkState;
    uVar5._4_4_ = ((FFreeBlock *)param_2)->NumFreeBins;
    if (param_2 < (FFreeBlock *)param_1->_padding_) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(UPTRINT)InPtr >= AddressSpaceBase",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                         ,0xec,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar15 = (longlong)param_2 - param_1->_padding_;
    uVar13 = uVar15 >> ((byte)param_1->_padding_ & 0x3f);
    puVar12 = (ulonglong *)
              (((ulonglong)((int)param_1->_padding_ - 1) & uVar13 & 0xffffffff) * 0x20 +
              param_1->_padding_);
    puVar11 = puVar12;
    do {
      if (*puVar11 == uVar13) {
        pFVar14 = (FPoolInfo *)
                  ((ulonglong)
                   ((uint)(uVar15 >> ((byte)param_1->_padding_ & 0x3f)) & (uint)param_1->_padding_)
                   * 0x20 + puVar11[1]);
        if (pFVar14 == (FPoolInfo *)0x0) goto LAB_1416964e3;
        goto LAB_1416964f9;
      }
      puVar11 = (ulonglong *)puVar11[3];
    } while (puVar11 != puVar12);
    pFVar14 = (FPoolInfo *)0x0;
LAB_1416964e3:
    UE::Logging::Private::BasicFatalLog
              (&`public:_static_void___cdecl_FMallocBinned2::Private::FreeBundles(FMallocBinned2&___ptr64,FMallocBinnedCommonBase::FBundleNode*___ptr64,unsigned_int)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMemory);
LAB_1416964f9:
    if (pFVar14->Canary != FirstFreeBlockIsPtr) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    if (pFVar14->FirstFreeBlock == (FFreeBlock *)0x0) {
      ppFVar1 = &pFVar14->Next;
      if (pFVar14->Next != (FPoolInfo *)0x0) {
        pFVar14->Next->PtrToPrevNext = pFVar14->PtrToPrevNext;
      }
      *pFVar14->PtrToPrevNext = *ppFVar1;
      pFVar6 = (pFVar2->ActivePools).Front;
      if (pFVar6 != (FPoolInfo *)0x0) {
        pFVar6->PtrToPrevNext = ppFVar1;
      }
      *ppFVar1 = (pFVar2->ActivePools).Front;
      pFVar14->PtrToPrevNext = (FPoolInfo **)pFVar2;
      (pFVar2->ActivePools).Front = pFVar14;
    }
    else {
      EVar3 = pFVar14->FirstFreeBlock->CanaryAndForkState;
      if ((EVar3 != Zero) && (EVar3 != Value)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NodePool->FirstFreeBlock->CanaryAndForkState == EBlockCanary::Zero || NodePool->FirstFreeBlock->CanaryAndForkState == Allocator.CurrentCanary"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                           ,0x106,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    ((FFreeBlock *)param_2)->NumFreeBins = 1;
    ((FFreeBlock *)param_2)->NextFreeBlock = pFVar14->FirstFreeBlock;
    ((FFreeBlock *)param_2)->BinSize = (ushort)uVar4;
    ((FFreeBlock *)param_2)->CanaryAndForkState = Value;
    ((FFreeBlock *)param_2)->PoolIndex = (uchar)param_3;
    pFVar14->FirstFreeBlock = (FFreeBlock *)param_2;
    pFVar2->TotalUsedBins = pFVar2->TotalUsedBins - 1;
    if (pFVar14->Taken == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodePool->Taken >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                         ,0x115,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar14->Taken = pFVar14->Taken - 1;
    if (pFVar14->Taken == 0) {
      if ((pFVar14->Canary != FirstFreeBlockIsOSAllocSize) &&
         (pFVar14->Canary != FirstFreeBlockIsPtr)) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
      }
      pFVar14->Canary = Unassigned;
      if (pFVar14->Next != (FPoolInfo *)0x0) {
        pFVar14->Next->PtrToPrevNext = pFVar14->PtrToPrevNext;
      }
      *pFVar14->PtrToPrevNext = pFVar14->Next;
      EnterCriticalSection((LPCRITICAL_SECTION)&param_1->_padding_);
      FCachedOSPageAllocator::FreeImpl
                ((FCachedOSPageAllocator *)&param_1->CachedOSPageAllocator,
                 (void *)((ulonglong)param_2 & 0xffffffffffff0000),(ulonglong)GMB2PageSize,0x40,
                 0x4000000,(param_1->CachedOSPageAllocator).FreedPageBlocks,
                 &(param_1->CachedOSPageAllocator).FreedPageBlocksNum,
                 &(param_1->CachedOSPageAllocator).CachedTotal,(FWindowsRecursiveMutex *)0x0,false);
      LeaveCriticalSection((LPCRITICAL_SECTION)&param_1->_padding_);
      uVar8 = GMB2PageSize;
      uVar13 = (ulonglong)GMB2PageSize;
      uVar10 = GMB2PageSize / uVar4;
      if ((ulonglong)GMB2PageSize < (ulonglong)(uVar10 * uVar4) + 0x10) {
        uVar10 = uVar10 - 1;
      }
      pFVar2->TotalAllocatedBins = pFVar2->TotalAllocatedBins - uVar10;
      pFVar2->TotalAllocatedMem = pFVar2->TotalAllocatedMem - uVar8;
      LOCK();
      FMallocBinnedCommonBase::AllocatedOSSmallPoolMemory =
           (atomic<__int64>)((longlong)FMallocBinnedCommonBase::AllocatedOSSmallPoolMemory - uVar13)
      ;
      UNLOCK();
    }
    param_2 = (FBundleNode *)(uVar5 & 0xffffffffffff);
    if ((FFreeBlock *)(uVar5 & 0xffffffffffff) == (FFreeBlock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141696714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar2->Mutex);
      return;
    }
  } while( true );
}

// FreeMetaDataMemory @ 141697be0

void __cdecl FMallocBinned2::FreeMetaDataMemory(void *param_1,ulong64 param_2)

{
  if (param_1 != (void *)0x0) {
    FWindowsPlatformMemory::BinnedFreeToOS
              (param_1,(param_2 - 1) + (ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity &
                       ~((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1));
    return;
  }
  return;
}

// GetAllocationSize @ 141698630

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMallocBinned2::GetAllocationSize(FMallocBinned2 *this,void *param_1,ulong64 *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FPoolInfo *this_00;
  ulong64 uVar5;
  
  if ((short)param_1 == 0) {
    if (param_1 == (void *)0x0) {
      bVar3 = false;
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
      this_00 = TMallocBinnedCommon<FMallocBinned2,51,32752>::Internal::FindPoolInfo(this,param_1);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
      if (this_00 == (FPoolInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
        FMallocBinnedCommonBase::UnrecognizedPointerFatalError
                  ((FMallocBinnedCommonBase *)this,param_1);
      }
      uVar5 = FPoolInfo::GetOsAllocatedBytes(this_00);
      uVar1 = (ulonglong)this_00->AllocSize * 8;
      if ((uVar5 <= uVar1 && uVar1 - uVar5 != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("PoolOSRequestedBytes <= PoolOsBytes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                             ,0x3a5,L"FMallocBinned::GetAllocationSizeExternal %zu %zu"), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *param_2 = uVar5;
      bVar3 = true;
    }
  }
  else {
    if (*(char *)((longlong)((ulonglong)param_1 & 0xffffffffffff0000) + 3) != -0x1d) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    *param_2 = (ulonglong)*(ushort *)((ulonglong)param_1 & 0xffffffffffff0000);
    bVar3 = true;
  }
  return bVar3;
}

// GetDescriptiveName @ 141699560

wchar_t * __thiscall FMallocBinned2::GetDescriptiveName(FMallocBinned2 *this)

{
  return L"Binned2";
}

// GetImmediatelyFreeableCachedMemorySize @ 141699900

ulong64 __thiscall FMallocBinned2::GetImmediatelyFreeableCachedMemorySize(FMallocBinned2 *this)

{
  return (this->CachedOSPageAllocator).CachedTotal;
}

// GetTotalFreeCachedMemorySize @ 1416a17b0

ulong64 __thiscall FMallocBinned2::GetTotalFreeCachedMemorySize(FMallocBinned2 *this)

{
  return (this->CachedOSPageAllocator).CachedTotal;
}

// IsInternallyThreadSafe @ 1416b0ba0

bool __thiscall FMallocBinned2::IsInternallyThreadSafe(FMallocBinned2 *this)

{
  return true;
}

// Malloc @ 1416b2140

void * __thiscall FMallocBinned2::Malloc(FMallocBinned2 *this,ulong64 param_1,uint param_2)

{
  bool bVar1;
  void *pvVar2;
  ulong64 local_res10;
  uint local_res18 [4];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (0x7ff0 < param_1 || 0x10 < param_2) {
    bVar1 = TMallocBinnedCommon<FMallocBinned2,51,32752>::PromoteToLargerBin
                      ((TMallocBinnedCommon<FMallocBinned2,51,32752> *)this,&local_res10,local_res18
                       ,this);
    if (!bVar1) {
      pvVar2 = MallocExternalLarge(this,local_res10,local_res18[0]);
      return pvVar2;
    }
  }
  pvVar2 = MallocExternalSmall(this,local_res10,local_res18[0]);
  return pvVar2;
}

// MallocExternalLarge @ 1416b3c00

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FMallocBinned2::MallocExternalLarge(FMallocBinned2 *this,ulong64 param_1,uint param_2)

{
  longlong *lpCriticalSection;
  TCachedOSPageAllocator<64,67108864> *this_00;
  uint *puVar1;
  FLLMTracker *this_01;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  void *pvVar7;
  FLowLevelMemTracker *pFVar8;
  FTagData *pFVar9;
  FLLMThreadState *this_02;
  FPoolInfo *pFVar10;
  ulonglong uVar11;
  FFreeBlock *pFVar12;
  ELLMTagSet local_res18;
  
  uVar6 = 0x10;
  if (0x10 < param_2) {
    uVar6 = (ulonglong)param_2;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  uVar11 = (param_1 - 1) + uVar6 & ~(uVar6 - 1);
  uVar3 = (uint)uVar6;
  if (((uVar3 & uVar3 - 1) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMath::IsPowerOfTwo(Alignment)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                         ,0x26a,L"Invalid Malloc alignment: \'%u\' is not a power of two"), bVar4))
  {
    pcVar2 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar2)();
    return pvVar7;
  }
  if ((GMB2PageSize < uVar3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Alignment <= GMB2PageSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                         ,0x26b,
                         L"Invalid Malloc alignment: \'%u\' is greater than the page size \'%u\'"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar2)();
    return pvVar7;
  }
  pFVar12 = (FFreeBlock *)
            (((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1) + uVar11 &
            ~((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1));
  if (((((ulonglong)pFVar12 & 7) != 0) || (0x7fffffff8 < ((ulonglong)pFVar12 & 0xfffffffffffffff8)))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSupportedSize(AlignedSize)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                            ,0x26e,L"Invalid Malloc size: \'%I64u\'"), bVar4)) {
    pcVar2 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar2)();
    return pvVar7;
  }
  bVar4 = false;
  if ((FLowLevelMemTracker::EnabledState != Disabled) &&
     (pFVar8 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState != Disabled)) {
    FLowLevelMemTracker::BootstrapInitialise(pFVar8);
    this_01 = pFVar8->Trackers[0];
    bVar4 = true;
    local_res18 = None;
    pFVar9 = FLowLevelMemTracker::FindOrAddTagData(this_01->LLMRef,FMalloc,Scope);
    this_02 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_01);
    UE::LLMPrivate::FLLMThreadState::PushTag(this_02,pFVar9,None);
  }
  lpCriticalSection = &this->_padding_;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->CachedOSPageAllocator;
  puVar1 = &(this->CachedOSPageAllocator).FreedPageBlocksNum;
  pvVar7 = FCachedOSPageAllocator::AllocateImpl
                     ((FCachedOSPageAllocator *)this_00,(ulong64)pFVar12,0x4000000,
                      this_00->FreedPageBlocks,this_00->FreedPageBlocks + *puVar1,puVar1,
                      &(this->CachedOSPageAllocator).CachedTotal,
                      (FWindowsRecursiveMutex *)lpCriticalSection);
  if (pvVar7 == (void *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                    /* WARNING: Subroutine does not return */
    FMallocBinnedCommonBase::OutOfMemory((ulong64)pFVar12,0);
  }
  pFVar10 = TMallocBinnedCommon<FMallocBinned2,51,32752>::Internal::GetOrCreatePoolInfo
                      (this,pvVar7,FirstFreeBlockIsOSAllocSize);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((ulonglong)pvVar7 & uVar6 - 1) != 0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  if (((((ulonglong)pvVar7 & (ulonglong)GMB2PageSize - 1) != 0) || ((short)pvVar7 != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(Result, GMB2PageSize) && IsOSAllocation(Result)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                         ,0x286,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar2)();
    return pvVar7;
  }
  LOCK();
  FMallocBinnedCommonBase::AllocatedLargePoolMemory =
       (atomic<__int64>)((longlong)FMallocBinnedCommonBase::AllocatedLargePoolMemory + uVar11);
  UNLOCK();
  LOCK();
  FMallocBinnedCommonBase::AllocatedLargePoolMemoryWAlignment =
       (atomic<__int64>)
       ((longlong)&pFVar12->BinSize +
       (longlong)FMallocBinnedCommonBase::AllocatedLargePoolMemoryWAlignment);
  UNLOCK();
  if (((uVar11 == 0) ||
      (pFVar12 < (FFreeBlock *)(ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size > 0 && AlignedSize >= OsAllocationGranularity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                         ,0x28e,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar2)();
    return pvVar7;
  }
  if (pFVar10->Canary != FirstFreeBlockIsOSAllocSize) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  pFVar10->AllocSize = (uint)(uVar11 >> 3);
  pFVar10->FirstFreeBlock = pFVar12;
  if (bVar4) {
    pFVar8 = FLowLevelMemTracker::Get();
    UE::LLMPrivate::FLLMTracker::PopTag(pFVar8->Trackers[local_res18],local_res18);
  }
  return pvVar7;
}

// MallocExternalSmall @ 1416b3f30

/* WARNING: Removing unreachable block (ram,0x0001416b3fe2) */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FMallocBinned2::MallocExternalSmall(FMallocBinned2 *this,ulong64 param_1,uint param_2)

{
  FPoolInfo **ppFVar1;
  FBundleNode **ppFVar2;
  uint *puVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  FPoolInfo *this_00;
  ulonglong *puVar7;
  uint uVar8;
  FBundleNode *pFVar10;
  int iVar11;
  ulonglong uVar12;
  FPoolList *pFVar13;
  bool bVar14;
  ulonglong uVar9;
  
  bVar4 = MemSizeToPoolIndex[param_1 + 7 >> 3];
  uVar12 = (ulonglong)bVar4;
  if (((FMallocBinnedCommonBase::BinnedTlsSlot == 0xffffffff) ||
      (plVar6 = TlsGetValue(FMallocBinnedCommonBase::BinnedTlsSlot), plVar6 == (longlong *)0x0)) ||
     ((char)plVar6[0xcf] == '\0')) {
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar9 = 0;
    pFVar10 = (FBundleNode *)plVar6[uVar12 * 4 + 3];
    if (pFVar10 == (FBundleNode *)0x0) {
      *(undefined4 *)(plVar6 + uVar12 * 4 + 4) = 0;
      do {
        pFVar10 = Private::GGlobalRecycler.Bundles[uVar12].FreeBundles[uVar9];
        ppFVar2 = Private::GGlobalRecycler.Bundles[uVar12].FreeBundles + uVar9;
        if (pFVar10 != (FBundleNode *)0x0) {
          LOCK();
          bVar14 = pFVar10 == *ppFVar2;
          if (bVar14) {
            *ppFVar2 = (FBundleNode *)0x0;
          }
          UNLOCK();
          if (bVar14) {
            plVar6[uVar12 * 4 + 3] = (longlong)pFVar10;
            *(uint *)(plVar6 + uVar12 * 4 + 4) = (uint)pFVar10->Count;
            goto LAB_1416b4020;
          }
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < 8);
      plVar6[uVar12 * 4 + 3] = 0;
    }
    else {
LAB_1416b4020:
      if (plVar6[uVar12 * 4 + 5] != 0 && pFVar10 == (FBundleNode *)0x0) {
        lVar5 = plVar6[uVar12 * 4 + 5];
        plVar6[uVar12 * 4 + 5] = 0;
        plVar6[uVar12 * 4 + 3] = lVar5;
        plVar6[uVar12 * 4 + 4] = plVar6[uVar12 * 4 + 6];
        *(undefined4 *)(plVar6 + uVar12 * 4 + 6) = 0;
      }
      puVar7 = (ulonglong *)plVar6[uVar12 * 4 + 3];
      if (puVar7 != (ulonglong *)0x0) {
        *(int *)(plVar6 + uVar12 * 4 + 4) = (int)plVar6[uVar12 * 4 + 4] + -1;
        plVar6[uVar12 * 4 + 3] = *puVar7 & 0xffffffffffff;
        *plVar6 = *plVar6 + (ulonglong)SmallBinSizes[uVar12];
        return puVar7;
      }
    }
  }
  iVar11 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->SmallPoolTables[uVar12].Mutex);
  this_00 = this->SmallPoolTables[uVar12].ActivePools.Front;
  if (this_00 == (FPoolInfo *)0x0) {
    this_00 = FPoolList::PushNewPoolToFront
                        (&this->SmallPoolTables[uVar12].ActivePools,this,
                         this->SmallPoolTables + uVar12,(uint)bVar4);
  }
  puVar7 = FPoolInfo::AllocateBin(this_00);
  puVar3 = &this->SmallPoolTables[uVar12].TotalUsedBins;
  *puVar3 = *puVar3 + 1;
  LOCK();
  FMallocBinnedCommonBase::AllocatedSmallPoolMemory =
       (atomic<__int64>)
       ((longlong)FMallocBinnedCommonBase::AllocatedSmallPoolMemory +
       (ulonglong)this->SmallPoolTables[uVar12].BinSize);
  UNLOCK();
  if (plVar6 != (longlong *)0x0) {
    do {
      if (this_00->Canary != FirstFreeBlockIsPtr) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
      }
      if ((this_00->FirstFreeBlock == (FFreeBlock *)0x0) ||
         (this_00->FirstFreeBlock->NumFreeBins == 0)) break;
      if (0xffff < (int)plVar6[uVar12 * 4 + 4] * this->SmallPoolTables[uVar12].BinSize ||
          0x3f < *(uint *)(plVar6 + uVar12 * 4 + 4)) {
        if (plVar6[uVar12 * 4 + 5] != 0) break;
        plVar6[uVar12 * 4 + 5] = plVar6[uVar12 * 4 + 3];
        plVar6[uVar12 * 4 + 6] = plVar6[uVar12 * 4 + 4];
        plVar6[uVar12 * 4 + 3] = 0;
        *(undefined4 *)(plVar6 + uVar12 * 4 + 4) = 0;
      }
      *puVar7 = (plVar6[uVar12 * 4 + 3] ^ *puVar7) & 0xffff000000000000 ^ plVar6[uVar12 * 4 + 3];
      *(int *)(plVar6 + uVar12 * 4 + 4) = (int)plVar6[uVar12 * 4 + 4] + 1;
      plVar6[uVar12 * 4 + 3] = (longlong)puVar7;
      puVar7 = FPoolInfo::AllocateBin(this_00);
      puVar3 = &this->SmallPoolTables[uVar12].TotalUsedBins;
      *puVar3 = *puVar3 + 1;
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x20);
  }
  if (this_00->Canary != FirstFreeBlockIsPtr) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  if ((this_00->FirstFreeBlock == (FFreeBlock *)0x0) || (this_00->FirstFreeBlock->NumFreeBins == 0))
  {
    ppFVar1 = &this_00->Next;
    pFVar13 = &this->SmallPoolTables[uVar12].ExhaustedPools;
    if (this_00->Next != (FPoolInfo *)0x0) {
      this_00->Next->PtrToPrevNext = this_00->PtrToPrevNext;
    }
    *this_00->PtrToPrevNext = *ppFVar1;
    if (pFVar13->Front != (FPoolInfo *)0x0) {
      pFVar13->Front->PtrToPrevNext = ppFVar1;
    }
    *ppFVar1 = pFVar13->Front;
    this_00->PtrToPrevNext = &pFVar13->Front;
    pFVar13->Front = this_00;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->SmallPoolTables[uVar12].Mutex);
  return puVar7;
}

// OnMallocInitialized @ 1416b5460

void __thiscall FMallocBinned2::OnMallocInitialized(FMallocBinned2 *this)

{
  return;
}

// OnPostFork @ 1416b5480

void __thiscall FMallocBinned2::OnPostFork(FMallocBinned2 *this)

{
  return;
}

// OnPreFork @ 1416b55e0

void __thiscall FMallocBinned2::OnPreFork(FMallocBinned2 *this)

{
  return;
}

// QuantizeSize @ 1416b9800

ulong64 __thiscall FMallocBinned2::QuantizeSize(FMallocBinned2 *this,ulong64 param_1,uint param_2)

{
  ulong64 uVar1;
  
  uVar1 = TMallocBinnedCommon<FMallocBinned2,51,32752>::QuantizeSizeCommon
                    ((TMallocBinnedCommon<FMallocBinned2,51,32752> *)this,param_1,param_2,this);
  return uVar1;
}

// Realloc @ 1416ba260

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FMallocBinned2::Realloc(FMallocBinned2 *this,void *param_1,ulong64 param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  FPoolInfo *this_00;
  ulong64 uVar5;
  ulonglong uVar6;
  ushort *puVar7;
  ulong64 local_res18;
  uint local_res20 [2];
  
  local_res20[0] = param_3;
  local_res18 = param_2;
  if (param_2 == 0) {
    Free(this,param_1);
    return (void *)0x0;
  }
  if (((param_3 & param_3 - 1) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMath::IsPowerOfTwo(Alignment)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                         ,0x29c,L"Invalid Realloc alignment: \'%u\' is not a power of two"), bVar3))
  {
    pcVar2 = (code *)swi(3);
    pvVar4 = (void *)(*pcVar2)();
    return pvVar4;
  }
  if ((short)param_1 != 0) {
    if ((param_1 == (void *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                           ,0x2a0,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
    puVar7 = (ushort *)((ulonglong)param_1 & 0xffffffffffff0000);
    if (*(char *)((longlong)puVar7 + 3) != -0x1d) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    uVar6 = (ulonglong)*puVar7;
    if (param_2 <= uVar6 && (uVar6 & (ulonglong)param_3 - 1) == 0) {
      if ((byte)puVar7[1] == 0) {
        return param_1;
      }
      if (SmallBinSizes[(byte)puVar7[1] - 1] < param_2) {
        return param_1;
      }
    }
    pvVar4 = Malloc(this,param_2,param_3);
    if (param_2 < uVar6) {
      uVar6 = param_2;
    }
    memcpy(pvVar4,param_1,uVar6);
    Free(this,param_1);
    return pvVar4;
  }
  if (param_1 == (void *)0x0) {
    pvVar4 = Malloc(this,param_2,param_3);
    return pvVar4;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  this_00 = TMallocBinnedCommon<FMallocBinned2,51,32752>::Internal::FindPoolInfo(this,param_1);
  if (this_00 == (FPoolInfo *)0x0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  uVar5 = FPoolInfo::GetOsAllocatedBytes(this_00);
  uVar1 = this_00->AllocSize;
  uVar6 = (ulonglong)uVar1 * 8;
  if ((uVar5 <= uVar6 && uVar6 - uVar5 != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoolOSRequestedBytes <= PoolOsBytes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                         ,0x2c7,L"FMallocBinned2::Realloc %d %d"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pvVar4 = (void *)(*pcVar2)();
    return pvVar4;
  }
  bVar3 = param_3 < 0x11 && param_2 < 0x7ff1;
  if (param_3 >= 0x11 || param_2 >= 0x7ff1) {
    bVar3 = TMallocBinnedCommon<FMallocBinned2,51,32752>::PromoteToLargerBin
                      ((TMallocBinnedCommon<FMallocBinned2,51,32752> *)this,&local_res18,local_res20
                       ,this);
    param_2 = local_res18;
    param_3 = local_res20[0];
  }
  if (uVar5 < param_2) {
    if (bVar3 == false) goto LAB_1416ba604;
  }
  else if (bVar3 == false) {
    if (uVar5 <= (((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1) + param_2 &
                 ~((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1))) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
      local_res20[0] = 0x10;
      if (0x10 < param_3) {
        local_res20[0] = param_3;
      }
      if (param_2 == 0) {
        param_2 = 1;
      }
      uVar6 = ((ulonglong)local_res20[0] - 1) + param_2 & ~((ulonglong)local_res20[0] - 1);
      local_res18 = uVar6;
      if ((GMB2PageSize < local_res20[0]) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Alignment <= GMB2PageSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                             ,0x2eb,
                             L"Invalid Realloc alignment: \'%u\' is greater than the page size \'%u\'"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pvVar4 = (void *)(*pcVar2)();
        return pvVar4;
      }
      if ((((uVar6 & 7) != 0) || (0x7fffffff8 < (uVar6 & 0xfffffffffffffff8))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSupportedSize(NewSize)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                             ,0x2ec,L"Invalid Realloc size: \'%I64u\'"), bVar3)) {
        pcVar2 = (code *)swi(3);
        pvVar4 = (void *)(*pcVar2)();
        return pvVar4;
      }
      LOCK();
      FMallocBinnedCommonBase::AllocatedLargePoolMemory =
           (atomic<__int64>)
           ((longlong)FMallocBinnedCommonBase::AllocatedLargePoolMemory +
           uVar6 + (ulonglong)uVar1 * -8);
      UNLOCK();
      FPoolInfo::SetOSAllocationSizes(this_00,uVar6,uVar5);
      return param_1;
    }
LAB_1416ba604:
    pvVar4 = MallocExternalLarge(this,param_2,param_3);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
    goto LAB_1416ba61f;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  pvVar4 = MallocExternalSmall(this,param_2,param_3);
LAB_1416ba61f:
  if (param_2 < uVar6) {
    uVar6 = param_2;
  }
  memcpy(pvVar4,param_1,uVar6);
  Free(this,param_1);
  return pvVar4;
}

// Trim @ 1416c2d90

void __thiscall FMallocBinned2::Trim(FMallocBinned2 *this,bool param_1)

{
  longlong *lpCriticalSection;
  
  if (param_1) {
    FMallocBinnedCommonUtils::Trim<FMallocBinned2>(this);
    lpCriticalSection = &this->_padding_;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FCachedOSPageAllocator::FreeAllImpl
              ((FCachedOSPageAllocator *)&this->CachedOSPageAllocator,
               (this->CachedOSPageAllocator).FreedPageBlocks,
               &(this->CachedOSPageAllocator).FreedPageBlocksNum,
               &(this->CachedOSPageAllocator).CachedTotal,
               (FWindowsRecursiveMutex *)lpCriticalSection);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// UpdateStats @ 1416c5e70

void __thiscall FMallocBinned2::UpdateStats(FMallocBinned2 *this)

{
  if (!__CsvProfilerStat953) {
    FCsvProfilerTrace::OutputInlineStat("AllocatorCachedSlackMB",_GCsvCategory_FMemory.Index);
    __CsvProfilerStat953 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("AllocatorCachedSlackMB",_GCsvCategory_FMemory.Index,
             (int)((this->CachedOSPageAllocator).CachedTotal >> 0x14),Set);
  if (__CsvProfilerStat954 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("AllocatorImmediatelyFreeableCachedSlackMB",_GCsvCategory_FMemory.Index);
    __CsvProfilerStat954 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("AllocatorImmediatelyFreeableCachedSlackMB",_GCsvCategory_FMemory.Index,
             (int)((this->CachedOSPageAllocator).CachedTotal >> 0x14),Set);
  TMallocBinnedCommon<FMallocBinned2,51,32752>::UpdateStatsCommon
            ((TMallocBinnedCommon<FMallocBinned2,51,32752> *)this,this);
  return;
}

// ValidateHeap @ 1416c7a40

bool __thiscall FMallocBinned2::ValidateHeap(FMallocBinned2 *this)

{
  undefined1 *puVar1;
  FPoolInfo *pFVar2;
  FFreeBlock *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FPoolTable *pFVar7;
  FPoolList *pFVar8;
  FPoolList *pFVar9;
  
  if ((TCachedOSPageAllocator<64,67108864> *)this->SmallPoolTables != &this->CachedOSPageAllocator)
  {
    pFVar9 = &this->SmallPoolTables[0].ExhaustedPools;
    do {
      EnterCriticalSection((LPCRITICAL_SECTION)(pFVar9 + 3));
      pFVar7 = (FPoolTable *)(pFVar9 + -1);
      pFVar2 = (((FPoolTable *)(pFVar9 + -1))->ActivePools).Front;
      while (pFVar2 != (FPoolInfo *)0x0) {
        if (((FPoolTable *)pFVar2->PtrToPrevNext != pFVar7) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pool->PtrToPrevNext == PoolPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                               ,0x340,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if ((pFVar2->FirstFreeBlock == (FFreeBlock *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pool->FirstFreeBlock",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                               ,0x341,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        for (pFVar3 = pFVar2->FirstFreeBlock; pFVar3 != (FFreeBlock *)0x0;
            pFVar3 = pFVar3->NextFreeBlock) {
          if ((pFVar3->NumFreeBins == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Free->GetNumFreeBins() > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                                 ,0x344,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pFVar7 = (FPoolTable *)&((pFVar7->ActivePools).Front)->Next;
        pFVar2 = *(FPoolInfo **)pFVar7;
      }
      pFVar2 = pFVar9->Front;
      pFVar8 = pFVar9;
      while (pFVar2 != (FPoolInfo *)0x0) {
        if (((FPoolList *)pFVar2->PtrToPrevNext != pFVar8) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pool->PtrToPrevNext == PoolPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                               ,0x34e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if ((pFVar2->FirstFreeBlock != (FFreeBlock *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Pool->FirstFreeBlock",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                               ,0x34f,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar8 = (FPoolList *)&pFVar8->Front->Next;
        pFVar2 = *(FPoolInfo **)pFVar8;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(pFVar9 + 3));
      puVar1 = (undefined1 *)(pFVar9 + 8);
      pFVar9 = pFVar9 + 9;
    } while ((TCachedOSPageAllocator<64,67108864> *)puVar1 != &this->CachedOSPageAllocator);
  }
  return true;
}

