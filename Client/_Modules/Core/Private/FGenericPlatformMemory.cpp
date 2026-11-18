// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 24

// <lambda_1> @ 141618e10

<lambda_1> * __thiscall
`FGenericPlatformMemory::OnOutOfMemory'::__l2::<lambda_1>::<lambda_1>
          (void *this,ulong64 *param_1,uint *param_2)

{
  *(ulong64 **)this = param_1;
  *(uint **)((longlong)this + 8) = param_2;
  return this;
}

// operator() @ 141622810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FGenericPlatformMemory::OnOutOfMemory'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  FOutputDeviceRedirector *pFVar2;
  FLowLevelMemTracker *this_00;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  undefined1 auStack_328 [32];
  FPlatformMemoryStats local_2b8;
  wchar_t local_228 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_328;
  pFVar2 = GetGlobalLogSingleton();
  if (pFVar2 != (FOutputDeviceRedirector *)0x0) {
    pFVar2 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::Panic(pFVar2);
  }
  FGenericPlatformMemory::OOMAllocationSize = **(ulong64 **)this;
  FGenericPlatformMemory::OOMAllocationAlignment = **(uint **)((longlong)this + 8);
  FGenericPlatformMemory::bIsOOM = true;
  FWindowsPlatformMisc::GetSystemErrorMessage(local_228,0x100,0);
  FWindowsPlatformMemory::GetStats(&local_2b8);
  if (FGenericPlatformMemory::BackupOOMMemoryPool != (void *)0x0) {
    FWindowsPlatformMemory::BinnedFreeToOS(FGenericPlatformMemory::BackupOOMMemoryPool,0x2000000);
    if (2 < (byte)LogMemory._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree
                (this_00,Default,FGenericPlatformMemory::BackupOOMMemoryPool,None,true);
    }
    MemoryTrace_Free((ulong64)FGenericPlatformMemory::BackupOOMMemoryPool,0,0);
  }
  if (2 < (byte)LogMemory._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  if ((FGenericPlatformMemory::BackupOOMMemoryPool != (void *)0x0) &&
     (pFVar2 = GetGlobalLogSingleton(), pFVar2 != (FOutputDeviceRedirector *)0x0)) {
    pcVar1 = *(code **)((longlong)*UE::Private::GMalloc + 0xb0);
    pFVar2 = GetGlobalLogSingleton();
    (*pcVar1)(UE::Private::GMalloc,pFVar2);
  }
  this_01 = FCoreDelegates::GetOutOfMemoryDelegate();
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(this_01);
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  return;
}

// BaseAllocator @ 14162b020

FMalloc * __cdecl FGenericPlatformMemory::BaseAllocator(void)

{
  FMallocAnsi *this;
  
  if (::Instance == (FMalloc *)0x0) {
    this = FUseSystemMallocForNew::operator_new(8);
    if (this != (FMallocAnsi *)0x0) {
      ::Instance = (FMalloc *)FMallocAnsi::FMallocAnsi(this);
      return ::Instance;
    }
    ::Instance = (FMalloc *)0x0;
  }
  return ::Instance;
}

// DumpPlatformAndAllocatorStats @ 1416377e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericPlatformMemory::DumpPlatformAndAllocatorStats(FOutputDevice *param_1)

{
  float fVar1;
  undefined1 auStack_228 [32];
  wchar_t *local_208;
  double local_200;
  double local_1f8;
  FName local_1e8 [2];
  FPlatformMemoryStats local_1d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_228;
  if (GenericPlatformMemory::GLogPlatformMemoryStats != 0) {
    FWindowsPlatformMemory::GetStats(&local_1d8);
    local_1e8[0].ComparisonIndex.Value = LogMemory._4_4_;
    local_1e8[0].Number = LogMemory._8_4_;
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"Windows",7,Yes);
    local_208 = local_148.Ptr;
    FOutputDevice::CategorizedLogfImpl(param_1,local_1e8,Log,L"Platform Memory Stats for %s");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    fVar1 = __real_35800000;
    local_200 = (double)((float)(ulonglong)local_1d8._padding_ * __real_35800000);
    local_208 = (wchar_t *)(double)((float)(ulonglong)local_1d8._padding_ * __real_35800000);
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_1e8,Log,L"Process Physical Memory: %.2f MB used, %.2f MB peak");
    local_200 = (double)((float)(ulonglong)local_1d8._padding_ * fVar1);
    local_208 = (wchar_t *)(double)((float)(ulonglong)local_1d8._padding_ * fVar1);
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_1e8,Log,L"Process Virtual Memory: %.2f MB used, %.2f MB peak");
    local_1f8 = (double)((float)(ulonglong)local_1d8._padding_ * fVar1);
    local_200 = (double)((float)(ulonglong)local_1d8._padding_ * fVar1);
    local_208 = (wchar_t *)
                (double)((float)(ulonglong)(local_1d8._padding_ - local_1d8._padding_) * fVar1);
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_1e8,Log,L"Physical Memory: %.2f MB used,  %.2f MB free, %.2f MB total")
    ;
    local_1f8 = (double)((float)(ulonglong)local_1d8._padding_ * fVar1);
    local_200 = (double)((float)(ulonglong)local_1d8._padding_ * fVar1);
    local_208 = (wchar_t *)
                (double)((float)(ulonglong)(local_1d8._padding_ - local_1d8._padding_) * fVar1);
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_1e8,Log,L"Virtual Memory: %.2f MB used,  %.2f MB free, %.2f MB total");
  }
  (**(code **)((longlong)*UE::Private::GMalloc + 0xb0))(UE::Private::GMalloc,param_1);
  return;
}

// DumpStats @ 141637b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericPlatformMemory::DumpStats(FOutputDevice *param_1)

{
  float fVar1;
  undefined1 auStack_228 [32];
  wchar_t *local_208;
  double local_200;
  double local_1f8;
  FName local_1e8 [2];
  FPlatformMemoryStats local_1d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_228;
  if (GenericPlatformMemory::GLogPlatformMemoryStats != 0) {
    FWindowsPlatformMemory::GetStats(&local_1d8);
    local_1e8[0].ComparisonIndex.Value = LogMemory._4_4_;
    local_1e8[0].Number = LogMemory._8_4_;
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"Windows",7,Yes);
    local_208 = local_148.Ptr;
    FOutputDevice::CategorizedLogfImpl(param_1,local_1e8,Log,L"Platform Memory Stats for %s");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    fVar1 = __real_35800000;
    local_200 = (double)((float)(ulonglong)local_1d8._padding_ * __real_35800000);
    local_208 = (wchar_t *)(double)((float)(ulonglong)local_1d8._padding_ * __real_35800000);
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_1e8,Log,L"Process Physical Memory: %.2f MB used, %.2f MB peak");
    local_200 = (double)((float)(ulonglong)local_1d8._padding_ * fVar1);
    local_208 = (wchar_t *)(double)((float)(ulonglong)local_1d8._padding_ * fVar1);
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_1e8,Log,L"Process Virtual Memory: %.2f MB used, %.2f MB peak");
    local_1f8 = (double)((float)(ulonglong)local_1d8._padding_ * fVar1);
    local_200 = (double)((float)(ulonglong)local_1d8._padding_ * fVar1);
    local_208 = (wchar_t *)
                (double)((float)(ulonglong)(local_1d8._padding_ - local_1d8._padding_) * fVar1);
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_1e8,Log,L"Physical Memory: %.2f MB used,  %.2f MB free, %.2f MB total")
    ;
    local_1f8 = (double)((float)(ulonglong)local_1d8._padding_ * fVar1);
    local_200 = (double)((float)(ulonglong)local_1d8._padding_ * fVar1);
    local_208 = (wchar_t *)
                (double)((float)(ulonglong)(local_1d8._padding_ - local_1d8._padding_) * fVar1);
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_1e8,Log,L"Virtual Memory: %.2f MB used,  %.2f MB free, %.2f MB total");
  }
  return;
}

// GetConstants @ 14163f920

/* WARNING: Enum "Type": Some values do not have unique names */

FGenericPlatformMemoryConstants * __cdecl FGenericPlatformMemory::GetConstants(void)

{
  if (2 < (byte)LogMemory._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  return &MemoryConstants;
}

// GetExtraDevelopmentMemorySize @ 141641e20

ulong64 __cdecl FGenericPlatformMemory::GetExtraDevelopmentMemorySize(void)

{
  return 0;
}

// GetLLMAllocFunctions @ 141642fb0

bool __cdecl
FGenericPlatformMemory::GetLLMAllocFunctions
          (_func___cdecl_void_ptr_ulong64 **param_1,_func___cdecl_void_void_ptr_ulong64 **param_2,
          int *param_3)

{
  return false;
}

// GetMemorySizeBucket @ 1416435c0

/* WARNING: Enum "Type": Some values do not have unique names */

EPlatformMemorySizeBucket __cdecl FGenericPlatformMemory::GetMemorySizeBucket(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  uint uVar3;
  uint uVar4;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_b8;
  EPlatformMemorySizeBucket local_b4 [3];
  FPlatformMemoryStats local_a8;
  
  if (bCalculatedBucket) {
    return Bucket;
  }
  bCalculatedBucket = true;
  local_res20[0] = 0;
  local_res18[0] = 0;
  local_res10[0] = 0;
  local_res8[0] = 0;
  local_b8 = 0;
  local_b4[1] = 0;
  FConfigCacheIni::GetInt
            (GConfig,L"PlatformMemoryBuckets",L"LargestMemoryBucket_MinGB",local_res20,&GEngineIni);
  FConfigCacheIni::GetInt
            (GConfig,L"PlatformMemoryBuckets",L"LargerMemoryBucket_MinGB",local_res18,&GEngineIni);
  FConfigCacheIni::GetInt
            (GConfig,L"PlatformMemoryBuckets",L"DefaultMemoryBucket_MinGB",local_res10,&GEngineIni);
  FConfigCacheIni::GetInt
            (GConfig,L"PlatformMemoryBuckets",L"SmallerMemoryBucket_MinGB",local_res8,&GEngineIni);
  FConfigCacheIni::GetInt
            (GConfig,L"PlatformMemoryBuckets",L"SmallestMemoryBucket_MinGB",&local_b8,&GEngineIni);
  FConfigCacheIni::GetInt
            (GConfig,L"PlatformMemoryBuckets",L"TiniestMemoryBucket_MinGB",(int *)(local_b4 + 1),
             &GEngineIni);
  FWindowsPlatformMemory::GetStats(&local_a8);
  uVar4 = (uint)(local_a8._padding_ + 0x3fffffffU >> 0x1e);
  uVar3 = (uint)(local_a8._padding_ + 0x3fffffffU >> 0x1e);
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  if (0 < local_res8[0]) {
    if ((int)uVar4 < local_res8[0]) {
      Bucket = ((int)uVar4 < local_b8) + Smallest;
    }
    else {
      Bucket = Smaller;
    }
  }
  if ((0 < local_res10[0]) && (local_res10[0] <= (int)uVar4)) {
    Bucket = Default;
  }
  if ((0 < local_res18[0]) && (local_res18[0] <= (int)uVar4)) {
    Bucket = Larger;
  }
  if ((0 < local_res20[0]) && (local_res20[0] <= (int)uVar4)) {
    Bucket = Largest;
  }
  local_b4[0] = ~Largest;
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Value(pwVar2,L"MemBucket=",(int *)local_b4);
  if (bVar1) {
    Bucket = local_b4[0];
  }
  if (local_b4[0] == ~Largest) {
    if (3 < (byte)LogHAL._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
    }
  }
  else if (3 < (byte)LogHAL._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  }
  return Bucket;
}

// GetMemoryUsedFast @ 1416438c0

ulong64 __cdecl FGenericPlatformMemory::GetMemoryUsedFast(void)

{
  FPlatformMemoryStats *pFVar1;
  FPlatformMemoryStats local_98;
  
  pFVar1 = FWindowsPlatformMemory::GetStats(&local_98);
  return pFVar1->_padding_;
}

// GetPhysicalGBRam @ 1416449f0

uint __cdecl FGenericPlatformMemory::GetPhysicalGBRam(void)

{
  FGenericPlatformMemoryConstants *pFVar1;
  
  pFVar1 = FWindowsPlatformMemory::GetConstants();
  return pFVar1->TotalPhysicalGB;
}

// GetStats @ 141646190

/* WARNING: Enum "Type": Some values do not have unique names */

FPlatformMemoryStats * __cdecl
FGenericPlatformMemory::GetStats(FPlatformMemoryStats *__return_storage_ptr__)

{
  if (2 < (byte)LogMemory._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  FPlatformMemoryStats::FPlatformMemoryStats(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetStatsForMallocProfiler @ 1416461d0

void __cdecl FGenericPlatformMemory::GetStatsForMallocProfiler(FGenericMemoryStats *param_1)

{
  TStringView<wchar_t> local_a8;
  FPlatformMemoryStats local_98;
  
  FWindowsPlatformMemory::GetStats(&local_98);
  local_a8.DataPtr = L"Total Physical";
  local_a8.Size = 0xe;
  FGenericMemoryStats::Add(param_1,&local_a8,local_98._padding_);
  local_a8.DataPtr = L"Total Virtual";
  local_a8.Size = 0xd;
  FGenericMemoryStats::Add(param_1,&local_a8,local_98._padding_);
  local_a8.DataPtr = L"Page Size";
  local_a8.Size = 9;
  FGenericMemoryStats::Add(param_1,&local_a8,local_98._padding_);
  local_a8.DataPtr = L"Total Physical GB";
  local_a8.Size = 0x11;
  FGenericMemoryStats::Add(param_1,&local_a8,(ulonglong)(uint)local_98._padding_);
  local_a8.DataPtr = L"Available Physical";
  local_a8.Size = 0x12;
  FGenericMemoryStats::Add(param_1,&local_a8,local_98._padding_);
  local_a8.DataPtr = L"Available Virtual";
  local_a8.Size = 0x11;
  FGenericMemoryStats::Add(param_1,&local_a8,local_98._padding_);
  local_a8.DataPtr = L"Used Physical";
  local_a8.Size = 0xd;
  FGenericMemoryStats::Add(param_1,&local_a8,local_98._padding_);
  local_a8.DataPtr = L"Peak Used Physical";
  local_a8.Size = 0x12;
  FGenericMemoryStats::Add(param_1,&local_a8,local_98._padding_);
  local_a8.DataPtr = L"Used Virtual";
  local_a8.Size = 0xc;
  FGenericMemoryStats::Add(param_1,&local_a8,local_98._padding_);
  local_a8.DataPtr = L"Peak Used Virtual";
  local_a8.Size = 0x11;
  FGenericMemoryStats::Add(param_1,&local_a8,local_98._padding_);
  return;
}

// GetStatsRaw @ 141646360

FPlatformMemoryStats * __cdecl
FGenericPlatformMemory::GetStatsRaw(FPlatformMemoryStats *__return_storage_ptr__)

{
  FWindowsPlatformMemory::GetStats(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Init @ 141647a10

void __cdecl FGenericPlatformMemory::Init(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTSTicker *this;
  undefined8 *puVar3;
  ulong64 uVar4;
  TWeakPtr<FTSTicker::FElement,1> local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  SetupMemoryPools();
  this = FTSTicker::GetCoreTicker();
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[3] = FGenericStatsUpdater::EnqueueUpdateStats;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FTSTicker::AddTicker
            (this,&local_58,(TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_48,
             __real_3f800000);
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  FGenericStatsUpdater::DoUpdateStats();
  return;
}

// InternalUpdateStats @ 141649bf0

void __cdecl FGenericPlatformMemory::InternalUpdateStats(FPlatformMemoryStats *param_1)

{
  return;
}

// IsExtraDevelopmentMemoryAvailable @ 141649d80

bool __cdecl FGenericPlatformMemory::IsExtraDevelopmentMemoryAvailable(void)

{
  return false;
}

// MapNamedSharedMemoryRegion @ 14164da30

/* WARNING: Enum "Type": Some values do not have unique names */

FSharedMemoryRegion * __cdecl
FGenericPlatformMemory::MapNamedSharedMemoryRegion
          (FString *param_1,bool param_2,uint param_3,ulong64 param_4)

{
  if (1 < (byte)LogHAL._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  }
  return (FSharedMemoryRegion *)0x0;
}

// MemswapGreaterThan8 @ 14164dbc0

void __cdecl
FGenericPlatformMemory::MemswapGreaterThan8(void *param_1,void *param_2,ulong64 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  
  if ((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Union1.PtrVoid && Union2.PtrVoid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMemory.cpp"
                       ,0x1e6,L"Pointers must be non-null: %p, %p");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_3 < 9) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Size > 8",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMemory.cpp"
                       ,0x1ea,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar13 = param_1;
  puVar11 = param_2;
  if (((ulonglong)param_1 & 1) != 0) {
    uVar1 = *(undefined1 *)param_1;
    puVar11 = (undefined8 *)((longlong)param_2 + 1);
    puVar13 = (undefined8 *)((longlong)param_1 + 1);
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    param_3 = param_3 - 1;
    *(undefined1 *)param_2 = uVar1;
  }
  puVar10 = puVar13;
  puVar12 = puVar11;
  if (((ulonglong)puVar13 & 2) != 0) {
    puVar12 = (undefined8 *)((longlong)puVar11 + 2);
    puVar10 = (undefined8 *)((longlong)puVar13 + 2);
    param_3 = param_3 - 2;
    uVar2 = *(undefined2 *)puVar13;
    *(undefined2 *)puVar13 = *(undefined2 *)puVar11;
    *(undefined2 *)puVar11 = uVar2;
  }
  puVar11 = puVar10;
  puVar13 = puVar12;
  if (((ulonglong)puVar10 & 4) != 0) {
    puVar13 = (undefined8 *)((longlong)puVar12 + 4);
    puVar11 = (undefined8 *)((longlong)puVar10 + 4);
    param_3 = param_3 - 4;
    uVar3 = *(undefined4 *)puVar10;
    *(undefined4 *)puVar10 = *(undefined4 *)puVar12;
    *(undefined4 *)puVar12 = uVar3;
  }
  uVar7 = (int)puVar11 - (int)puVar13;
  uVar9 = 0;
  if (uVar7 != 0) {
    for (; (uVar7 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
    }
  }
  uVar8 = 0x20;
  if (uVar7 != 0) {
    uVar8 = uVar9;
  }
  uVar9 = 3;
  if (uVar8 < 3) {
    uVar9 = uVar8;
  }
  if (uVar9 != 0) {
    if (uVar9 != 1) {
      if ((uVar9 != 2) && (7 < param_3)) {
        uVar14 = param_3 >> 3;
        param_3 = param_3 + uVar14 * -8;
        puVar10 = puVar11;
        puVar12 = puVar13;
        do {
          puVar13 = puVar12 + 1;
          puVar11 = puVar10 + 1;
          uVar4 = *puVar10;
          *puVar10 = *puVar12;
          *puVar12 = uVar4;
          uVar14 = uVar14 - 1;
          puVar10 = puVar11;
          puVar12 = puVar13;
        } while (uVar14 != 0);
      }
      if (3 < param_3) {
        uVar14 = param_3 >> 2;
        param_3 = param_3 + uVar14 * -4;
        puVar10 = puVar11;
        puVar12 = puVar13;
        do {
          puVar13 = (undefined8 *)((longlong)puVar12 + 4);
          puVar11 = (undefined8 *)((longlong)puVar10 + 4);
          uVar3 = *(undefined4 *)puVar10;
          *(undefined4 *)puVar10 = *(undefined4 *)puVar12;
          *(undefined4 *)puVar12 = uVar3;
          uVar14 = uVar14 - 1;
          puVar10 = puVar11;
          puVar12 = puVar13;
        } while (uVar14 != 0);
      }
    }
    if (1 < param_3) {
      uVar14 = param_3 >> 1;
      param_3 = param_3 + uVar14 * -2;
      puVar10 = puVar11;
      puVar12 = puVar13;
      do {
        puVar13 = (undefined8 *)((longlong)puVar12 + 2);
        puVar11 = (undefined8 *)((longlong)puVar10 + 2);
        uVar2 = *(undefined2 *)puVar10;
        *(undefined2 *)puVar10 = *(undefined2 *)puVar12;
        *(undefined2 *)puVar12 = uVar2;
        uVar14 = uVar14 - 1;
        puVar10 = puVar11;
        puVar12 = puVar13;
      } while (uVar14 != 0);
    }
  }
  if (param_3 != 0) {
    puVar10 = puVar11;
    do {
      uVar1 = *(undefined1 *)(((longlong)puVar13 - (longlong)puVar11) + (longlong)puVar10);
      *(undefined1 *)(((longlong)puVar13 - (longlong)puVar11) + (longlong)puVar10) =
           *(undefined1 *)puVar10;
      *(undefined1 *)puVar10 = uVar1;
      param_3 = param_3 - 1;
      puVar10 = (undefined8 *)((longlong)puVar10 + 1);
    } while (param_3 != 0);
  }
  return;
}

// OnOutOfMemory @ 14164f3e0

void __cdecl FGenericPlatformMemory::OnOutOfMemory(ulong64 param_1,uint param_2)

{
  ulong64 local_res8;
  uint local_res10 [6];
  undefined1 local_18 [24];
  
  local_res8 = param_1;
  local_res10[0] = param_2;
  `FGenericPlatformMemory::OnOutOfMemory'::__l2::<lambda_1>::<lambda_1>
            (local_18,&local_res8,local_res10);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `FGenericPlatformMemory::OnOutOfMemory'::__l2::<lambda_1>::operator()(local_18);
      ThreadSafeOnce18 = 1;
      _Init_thread_footer(&::_TSS0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FWindowsPlatformProcess::SleepInfinite();
}

// PageProtect @ 14164fae0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FGenericPlatformMemory::PageProtect(void *param_1,ulong64 param_2,bool param_3,bool param_4)

{
  if (5 < (byte)LogMemory._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  }
  return false;
}

// PrettyMemory @ 1416504e0

FString * __cdecl
FGenericPlatformMemory::PrettyMemory(FString *__return_storage_ptr__,ulong64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  uVar2 = uVar1;
  while ((0x400 < param_1 && (uVar2 < 6))) {
    uVar1 = (ulonglong)((uint)param_1 & 0x3ff);
    param_1 = param_1 >> 10;
    uVar2 = uVar2 + 1;
  }
  uVar2 = uVar1 * 100 >> 10;
  if (uVar2 != 0) {
    if (uVar2 != (uVar2 / 10) * 10) {
      ::FString::PrintfImpl(__return_storage_ptr__,L"%llu.%02llu%s");
      return __return_storage_ptr__;
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"%llu.%llu%s");
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%llu%s");
  return __return_storage_ptr__;
}

// SetupMemoryPools @ 14165f260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericPlatformMemory::SetupMemoryPools(void)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_MCR_Physical> FVar3;
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  FThreadSafeStaticStat<FStat_MCR_PhysicalLLM> FVar6;
  FThreadSafeStaticStat<FStat_MCR_GPU> FVar7;
  FThreadSafeStaticStat<FStat_MCR_TexturePool> FVar8;
  FThreadSafeStaticStat<FStat_MCR_StreamingPool> FVar9;
  FThreadSafeStaticStat<FStat_MCR_UsedStreamingPool> FVar10;
  FLowLevelMemTracker *this;
  FName local_res8;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  FStatMessage local_48;
  
  FVar3 = StatPtr_MCR_Physical;
  if (StatPtr_MCR_Physical == (FThreadSafeStaticStat<FStat_MCR_Physical>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"MCR_Physical");
    FVar3 = (FThreadSafeStaticStat<FStat_MCR_Physical>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_MCR_Physical,*pFVar2,
                       L"Physical Memory Pool [Physical]","STATGROUP_Memory","STATCAT_Advanced",
                       L"Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar1 = *(FName *)FVar3;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_48.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_48.StatData.Pad[0] = '\0';
    local_48.StatData.Pad[1] = '\0';
    local_48.StatData.Pad[2] = '\0';
    local_48.StatData.Pad[3] = '\0';
    local_48.StatData.Pad[4] = '\0';
    local_48.StatData.Pad[5] = '\0';
    local_48.StatData.Pad[6] = '\0';
    local_48.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,&local_48);
    FStatsTrace::Set(&local_res8,0);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  FVar6 = StatPtr_MCR_PhysicalLLM;
  if (StatPtr_MCR_PhysicalLLM == (FThreadSafeStaticStat<FStat_MCR_PhysicalLLM>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"MCR_PhysicalLLM");
    FVar6 = (FThreadSafeStaticStat<FStat_MCR_PhysicalLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_MCR_PhysicalLLM,*pFVar2,
                       L"Total Physical Memory Pool (CPU + GPU) [PhysicalLLM]","STATGROUP_Memory",
                       "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_PhysicalLLM)
    ;
  }
  FVar1 = *(FName *)FVar6;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_48.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_48.StatData.Pad[0] = '\0';
    local_48.StatData.Pad[1] = '\0';
    local_48.StatData.Pad[2] = '\0';
    local_48.StatData.Pad[3] = '\0';
    local_48.StatData.Pad[4] = '\0';
    local_48.StatData.Pad[5] = '\0';
    local_48.StatData.Pad[6] = '\0';
    local_48.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,&local_48);
    FStatsTrace::Set(&local_res8,0);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  FVar7 = StatPtr_MCR_GPU;
  if (StatPtr_MCR_GPU == (FThreadSafeStaticStat<FStat_MCR_GPU>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"MCR_GPU");
    FVar7 = (FThreadSafeStaticStat<FStat_MCR_GPU>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_MCR_GPU,*pFVar2,
                       L"GPU Memory Pool [GPU]","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true
                       ,false,ST_int64,false,false,MCR_GPU);
  }
  FVar1 = *(FName *)FVar7;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_48.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_48.StatData.Pad[0] = '\0';
    local_48.StatData.Pad[1] = '\0';
    local_48.StatData.Pad[2] = '\0';
    local_48.StatData.Pad[3] = '\0';
    local_48.StatData.Pad[4] = '\0';
    local_48.StatData.Pad[5] = '\0';
    local_48.StatData.Pad[6] = '\0';
    local_48.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,&local_48);
    FStatsTrace::Set(&local_res8,0);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  FVar8 = StatPtr_MCR_TexturePool;
  if (StatPtr_MCR_TexturePool == (FThreadSafeStaticStat<FStat_MCR_TexturePool>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"MCR_TexturePool");
    FVar8 = (FThreadSafeStaticStat<FStat_MCR_TexturePool>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_MCR_TexturePool,*pFVar2,
                       L"Texture Memory Pool [Texture]","STATGROUP_Memory","STATCAT_Advanced",
                       L"Memory",true,false,ST_int64,false,false,MCR_TexturePool);
  }
  FVar1 = *(FName *)FVar8;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_48.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_48.StatData.Pad[0] = '\0';
    local_48.StatData.Pad[1] = '\0';
    local_48.StatData.Pad[2] = '\0';
    local_48.StatData.Pad[3] = '\0';
    local_48.StatData.Pad[4] = '\0';
    local_48.StatData.Pad[5] = '\0';
    local_48.StatData.Pad[6] = '\0';
    local_48.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,&local_48);
    FStatsTrace::Set(&local_res8,0);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  FVar9 = StatPtr_MCR_StreamingPool;
  if (StatPtr_MCR_StreamingPool == (FThreadSafeStaticStat<FStat_MCR_StreamingPool>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"MCR_StreamingPool");
    FVar9 = (FThreadSafeStaticStat<FStat_MCR_StreamingPool>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_MCR_StreamingPool,*pFVar2,
                       L"Streaming Texture Pool [Streaming]","STATGROUP_Memory","STATCAT_Advanced",
                       L"Memory",true,false,ST_int64,false,false,MCR_StreamingPool);
  }
  FVar1 = *(FName *)FVar9;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_48.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_48.StatData.Pad[0] = '\0';
    local_48.StatData.Pad[1] = '\0';
    local_48.StatData.Pad[2] = '\0';
    local_48.StatData.Pad[3] = '\0';
    local_48.StatData.Pad[4] = '\0';
    local_48.StatData.Pad[5] = '\0';
    local_48.StatData.Pad[6] = '\0';
    local_48.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,&local_48);
    FStatsTrace::Set(&local_res8,0);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  FVar10 = StatPtr_MCR_UsedStreamingPool;
  if (StatPtr_MCR_UsedStreamingPool == (FThreadSafeStaticStat<FStat_MCR_UsedStreamingPool>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"MCR_UsedStreamingPool");
    FVar10 = (FThreadSafeStaticStat<FStat_MCR_UsedStreamingPool>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MCR_UsedStreamingPool,*pFVar2,
                        L"Used Streaming Pool [Wanted]","STATGROUP_Memory","STATCAT_Advanced",
                        L"Memory",true,false,ST_int64,false,false,MCR_UsedStreamingPool);
  }
  FVar1 = *(FName *)FVar10;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_48.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_48.StatData.Pad[0] = '\0';
    local_48.StatData.Pad[1] = '\0';
    local_48.StatData.Pad[2] = '\0';
    local_48.StatData.Pad[3] = '\0';
    local_48.StatData.Pad[4] = '\0';
    local_48.StatData.Pad[5] = '\0';
    local_48.StatData.Pad[6] = '\0';
    local_48.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,&local_48);
    FStatsTrace::Set(&local_res8,0);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  FLLMScope::FLLMScope(local_res10,BackupOOMMemoryPoolPlatform,false,None,Platform,true);
  FLLMScope::FLLMScope((FLLMScope *)&local_res8,BackupOOMMemoryPool,false,None,Default,true);
  FMemScope::FMemScope(local_res18,BackupOOMMemoryPool,true);
  BackupOOMMemoryPool = FWindowsPlatformMemory::BinnedAllocFromOS(0x2000000);
  MemoryTrace_Alloc((ulong64)BackupOOMMemoryPool,0x2000000,8,0,0);
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelAlloc
              (this,Default,BackupOOMMemoryPool,0x2000000,Untagged,None,true);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// UnmapNamedSharedMemoryRegion @ 141666c50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FGenericPlatformMemory::UnmapNamedSharedMemoryRegion(FSharedMemoryRegion *param_1)

{
  if (1 < (byte)LogHAL._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  }
  return false;
}

