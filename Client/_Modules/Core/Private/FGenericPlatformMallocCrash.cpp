// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 27

// FGenericPlatformMallocCrash @ 14161d720

FGenericPlatformMallocCrash * __thiscall
FGenericPlatformMallocCrash::FGenericPlatformMallocCrash
          (FGenericPlatformMallocCrash *this,FMalloc *param_1)

{
  code *pcVar1;
  uint uVar2;
  FGenericPlatformMallocCrash *pFVar3;
  FPlatformMemoryStats *pFVar4;
  uchar *puVar5;
  FLowLevelMemTracker *pFVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  ulonglong uVar10;
  bool bVar11;
  FLLMScope local_res8 [2];
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  FPlatformMemoryStats local_138;
  FPlatformMemoryStats local_b0;
  
  this->_padding_ = (longlong)&___7FGenericPlatformMallocCrash__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->InternalLock,4000);
  this->CrashedThreadId = 0;
  this->LargeMemoryPool = (uchar *)0x0;
  this->LargeMemoryPoolOffset = 0;
  this->SmallMemoryPool = (uchar *)0x0;
  this->SmallMemoryPoolOffset = 0;
  uVar2 = CalculateSmallPoolTotalSize(this);
  bVar11 = ::TotalSize == 0;
  this->SmallMemoryPoolSize = uVar2;
  this->BookkeepingPool = (uchar *)0x0;
  this->BookkeepingPoolOffset = 0;
  if (bVar11) {
    puVar9 = &AllPoolDesc[0].NumAllocs;
    lVar8 = 0xe;
    do {
      if ((*puVar9 & 0xf) != 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("PoolDesc.NumAllocs % 16 == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMallocCrash.cpp"
                            ,0x23d,L"");
        if (bVar11) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FGenericPlatformMallocCrash *)(*pcVar1)();
          return pFVar3;
        }
      }
      if ((((FPoolDesc *)(puVar9 + -1))->Size & 0xf) != 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("PoolDesc.Size % 16 == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMallocCrash.cpp"
                            ,0x23e,L"");
        if (bVar11) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FGenericPlatformMallocCrash *)(*pcVar1)();
          return pFVar3;
        }
      }
      uVar2 = *puVar9;
      puVar9 = puVar9 + 2;
      ::TotalSize = ::TotalSize + uVar2 * 0x10;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    pFVar4 = FWindowsPlatformMemory::GetStats(&local_138);
    iVar7 = (int)pFVar4->_padding_;
    if (iVar7 == 0) {
      iVar7 = 0x10000;
    }
    ::TotalSize = (::TotalSize - 1) + iVar7 & -iVar7;
  }
  this->BookkeepingPoolSize = ::TotalSize;
  this->PreviousMalloc = param_1;
  FLLMScope::FLLMScope(local_res10,GenericPlatformMallocCrash,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,GenericPlatformMallocCrash,true);
  FLLMScope::FLLMScope(local_res8,GenericPlatformMallocCrashPlatform,false,None,Platform,true);
  pFVar4 = FWindowsPlatformMemory::GetStats(&local_b0);
  iVar7 = (int)pFVar4->_padding_;
  if (iVar7 == 0) {
    iVar7 = 0x10000;
  }
  uVar10 = (ulonglong)(iVar7 + 0x1fffffU & -iVar7);
  puVar5 = FWindowsPlatformMemory::BinnedAllocFromOS(uVar10);
  this->LargeMemoryPool = puVar5;
  puVar5 = FWindowsPlatformMemory::BinnedAllocFromOS((ulonglong)this->SmallMemoryPoolSize);
  this->SmallMemoryPool = puVar5;
  puVar5 = FWindowsPlatformMemory::BinnedAllocFromOS((ulonglong)this->BookkeepingPoolSize);
  this->BookkeepingPool = puVar5;
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar6 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar6 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelAlloc
              (pFVar6,Default,this->LargeMemoryPool,uVar10,Untagged,None,true);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar6 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        pFVar6 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelAlloc
                (pFVar6,Default,this->SmallMemoryPool,(ulonglong)this->SmallMemoryPoolSize,Untagged,
                 None,true);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar6 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar6 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelAlloc
                  (pFVar6,Default,this->BookkeepingPool,(ulonglong)this->BookkeepingPoolSize,
                   Untagged,None,true);
      }
    }
  }
  MemoryTrace_Alloc((ulong64)this->LargeMemoryPool,uVar10,1,0,0);
  MemoryTrace_Alloc((ulong64)this->SmallMemoryPool,(ulonglong)this->SmallMemoryPoolSize,1,0,0);
  MemoryTrace_Alloc((ulong64)this->BookkeepingPool,(ulonglong)this->BookkeepingPoolSize,1,0,0);
  if (((this->SmallMemoryPool == (uchar *)0x0) || (this->LargeMemoryPool == (uchar *)0x0)) ||
     (this->BookkeepingPool == (uchar *)0x0)) {
    FWindowsPlatformMisc::LocalPrint(L"Memory pools allocations failed, exiting...\n");
    FWindowsPlatformMisc::RequestExit
              (true,L"GenericPlatformmallocCrash().MemoryPoolsAllocationsFailed");
  }
  if (((((ulonglong)this->LargeMemoryPool & 0xf) != 0) ||
      (((ulonglong)this->SmallMemoryPool & 0xf) != 0)) ||
     (((ulonglong)this->BookkeepingPool & 0xf) != 0)) {
    FWindowsPlatformMisc::LocalPrint
              (L"OS allocations must be aligned to a value multiple of 16, exiting...\n");
    FWindowsPlatformMisc::RequestExit(true,L"GenericPlatformmallocCrash().InvalidAlignment");
  }
  InitializeSmallPools(this);
  FLLMScope::~FLLMScope(local_res8);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return this;
}

// ~FGenericPlatformMallocCrash @ 141620cc0

void __thiscall
FGenericPlatformMallocCrash::~FGenericPlatformMallocCrash(FGenericPlatformMallocCrash *this)

{
  this->_padding_ = (longlong)&___7FGenericPlatformMallocCrash__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->InternalLock);
  FExec::~FExec((FExec *)this);
  return;
}

// AllocateFromBookkeeping @ 141628ab0

uchar * __thiscall
FGenericPlatformMallocCrash::AllocateFromBookkeeping(FGenericPlatformMallocCrash *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  uint uVar5;
  
  uVar1 = this->BookkeepingPoolOffset;
  uVar5 = uVar1 + param_1;
  if (uVar5 <= this->BookkeepingPoolSize) {
    this->BookkeepingPoolOffset = uVar5;
    return this->BookkeepingPool + uVar1;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMallocCrash.cpp"
                     ,0x284,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    puVar4 = (uchar *)(*pcVar2)();
    return puVar4;
  }
  return (uchar *)0x0;
}

// AllocateFromSmallPool @ 141628b10

uchar * __thiscall
FGenericPlatformMallocCrash::AllocateFromSmallPool(FGenericPlatformMallocCrash *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  uint uVar5;
  
  uVar1 = this->SmallMemoryPoolOffset;
  uVar5 = uVar1 + param_1;
  if (uVar5 <= this->SmallMemoryPoolSize) {
    this->SmallMemoryPoolOffset = uVar5;
    return this->SmallMemoryPool + uVar1;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMallocCrash.cpp"
                     ,0x277,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    puVar4 = (uchar *)(*pcVar2)();
    return puVar4;
  }
  return (uchar *)0x0;
}

// CalculateBookkeepingPoolTotalSize @ 14162d020

uint __thiscall
FGenericPlatformMallocCrash::CalculateBookkeepingPoolTotalSize(FGenericPlatformMallocCrash *this)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  FPlatformMemoryStats *pFVar5;
  uint *puVar6;
  longlong lVar7;
  FPlatformMemoryStats local_98;
  
  if (::TotalSize != 0) {
    return ::TotalSize;
  }
  puVar6 = &AllPoolDesc[0].NumAllocs;
  lVar7 = 0xe;
  do {
    if ((*puVar6 & 0xf) != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoolDesc.NumAllocs % 16 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMallocCrash.cpp"
                         ,0x23d,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
    }
    if ((((FPoolDesc *)(puVar6 + -1))->Size & 0xf) != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoolDesc.Size % 16 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMallocCrash.cpp"
                         ,0x23e,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
    }
    uVar4 = *puVar6;
    puVar6 = puVar6 + 2;
    ::TotalSize = ::TotalSize + uVar4 * 0x10;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  pFVar5 = FWindowsPlatformMemory::GetStats(&local_98);
  iVar2 = (int)pFVar5->_padding_;
  if (iVar2 == 0) {
    iVar2 = 0x10000;
  }
  ::TotalSize = (::TotalSize - 1) + iVar2 & -iVar2;
  return ::TotalSize;
}

// CalculateSmallPoolTotalSize @ 14162d120

uint __thiscall
FGenericPlatformMallocCrash::CalculateSmallPoolTotalSize(FGenericPlatformMallocCrash *this)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  FPlatformMemoryStats *pFVar7;
  FPoolDesc *pFVar8;
  longlong lVar9;
  FPlatformMemoryStats local_98;
  
  if (::TotalSize != 0) {
    return ::TotalSize;
  }
  pFVar8 = AllPoolDesc;
  lVar9 = 0xe;
  do {
    if ((pFVar8->NumAllocs & 0xf) != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoolDesc.NumAllocs%16==0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMallocCrash.cpp"
                         ,0x22a,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
    }
    if ((pFVar8->Size & 0xf) != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoolDesc.Size%16==0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMallocCrash.cpp"
                         ,0x22b,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
    }
    puVar1 = &pFVar8->NumAllocs;
    puVar4 = &pFVar8->Size;
    pFVar8 = pFVar8 + 1;
    ::TotalSize = ::TotalSize + *puVar1 * *puVar4;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  pFVar7 = FWindowsPlatformMemory::GetStats(&local_98);
  iVar3 = (int)pFVar7->_padding_;
  if (iVar3 == 0) {
    iVar3 = 0x10000;
  }
  ::TotalSize = (::TotalSize - 1) + iVar3 & -iVar3;
  return ::TotalSize;
}

// CheckThreadForAllocation @ 14162e1e0

bool __thiscall
FGenericPlatformMallocCrash::CheckThreadForAllocation(FGenericPlatformMallocCrash *this)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  if (this->CrashedThreadId == DVar1) {
    return true;
  }
  if ((GMallocCrashNonCrashedThreadsMode != 0) && (GMallocCrashNonCrashedThreadsMode != 1)) {
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FWindowsPlatformProcess::SleepInfinite();
}

// CheckThreadForFree @ 14162e220

bool __thiscall FGenericPlatformMallocCrash::CheckThreadForFree(FGenericPlatformMallocCrash *this)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  if (this->CrashedThreadId == DVar1) {
    return true;
  }
  if (GMallocCrashNonCrashedThreadsMode != 0) {
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FWindowsPlatformProcess::SleepInfinite();
}

// ChoosePoolForSize @ 14162e260

FMallocCrashPool * __thiscall
FGenericPlatformMallocCrash::ChoosePoolForSize(FGenericPlatformMallocCrash *this,uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  while( true ) {
    lVar2 = (longlong)(int)uVar1 * 0x38;
    if ((((FMallocCrashPool *)(FMallocCrashPool::BytePools.Pad + lVar2))->NumUsed <
         *(uint *)(FMallocCrashPool::BytePools.Pad + lVar2 + 0x30)) &&
       (param_1 <= *(uint *)(FMallocCrashPool::BytePools.Pad + lVar2 + 0x10))) break;
    uVar1 = uVar1 + 1;
    if (0xd < uVar1) {
      return (FMallocCrashPool *)0x0;
    }
  }
  return (FMallocCrashPool *)(FMallocCrashPool::BytePools.Pad + lVar2);
}

// FindPoolForAlloc @ 14163b880

FMallocCrashPool * __thiscall
FGenericPlatformMallocCrash::FindPoolForAlloc(FGenericPlatformMallocCrash *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar3 = 0xe;
  do {
    iVar1 = (uVar3 >> 1) + iVar4;
    if (*(void **)(FMallocCrashPool::BytePools.Pad + (longlong)iVar1 * 0x38 + 0x28) <= param_1) {
      iVar4 = iVar1 + (uVar3 & 1);
    }
    uVar2 = uVar3 >> 1;
    uVar3 = uVar3 >> 1;
  } while (uVar2 != 0);
  return (FMallocCrashPool *)(FMallocCrashPool::BytePools.Pad + (longlong)(iVar4 + -1) * 0x38);
}

// Free @ 14163cb60

void __thiscall FGenericPlatformMallocCrash::Free(FGenericPlatformMallocCrash *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  int iVar4;
  FMallocCrashPool *pFVar5;
  FPtrInfo *pFVar6;
  
  DVar3 = GetCurrentThreadId();
  if (this->CrashedThreadId == DVar3) {
    if ((this->SmallMemoryPool <= param_1) &&
       (param_1 < this->SmallMemoryPool + this->SmallMemoryPoolSize)) {
      pFVar5 = FindPoolForAlloc(this,param_1);
      if (pFVar5 == (FMallocCrashPool *)0x0) {
        bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
        if (!bVar2) {
          return;
        }
      }
      else {
        iVar4 = (int)(((longlong)param_1 - (longlong)pFVar5->AllocBase) /
                     (longlong)(ulonglong)pFVar5->AllocationSize);
        if ((-1 < iVar4) && (iVar4 < (int)pFVar5->MaxNumAllocations)) {
          pFVar6 = TArrayView<FPtrInfo,int>::operator[](&pFVar5->Allocations,iVar4);
          memset(pFVar6->Ptr,0xcd,pFVar6->Size);
          pFVar6->Size = 0;
          pFVar5->NumUsed = pFVar5->NumUsed - 1;
          return;
        }
        FGenericPlatformMisc::LowLevelOutputDebugStringf
                  (L"Failed to free PoolSize=%u, PooledPtr=0x%016llx \n");
        bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
        if (!bVar2) {
          return;
        }
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (GMallocCrashNonCrashedThreadsMode == 0) {
                    /* WARNING: Subroutine does not return */
    FWindowsPlatformProcess::SleepInfinite();
  }
  return;
}

// Get @ 14163dea0

FGenericPlatformMallocCrash * __cdecl FGenericPlatformMallocCrash::Get(FMalloc *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FGenericPlatformMallocCrash(&CrashMalloc,param_1);
      atexit(`FGenericPlatformMallocCrash::Get'::__l2::_dynamic_atexit_destructor_for__CrashMalloc__
            );
      _Init_thread_footer(&::_TSS0);
      return &CrashMalloc;
    }
  }
  return &CrashMalloc;
}

// GetAllocationSize @ 14163e5a0

ulong64 __thiscall
FGenericPlatformMallocCrash::GetAllocationSize(FGenericPlatformMallocCrash *this,void *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  ulong64 uVar6;
  FPtrInfo *pFVar7;
  longlong lVar8;
  int iVar9;
  
  if ((this->SmallMemoryPool <= param_1) &&
     (param_1 < this->SmallMemoryPool + this->SmallMemoryPoolSize)) {
    iVar9 = 0;
    uVar5 = 0xe;
    do {
      iVar1 = (uVar5 >> 1) + iVar9;
      if (*(void **)(FMallocCrashPool::BytePools.Pad + (longlong)iVar1 * 0x38 + 0x28) <= param_1) {
        iVar9 = iVar1 + (uVar5 & 1);
      }
      uVar3 = uVar5 >> 1;
      uVar5 = uVar5 >> 1;
    } while (uVar3 != 0);
    lVar8 = (longlong)iVar9 * 0x38;
    uVar5 = (uint)((ulonglong)
                   ((longlong)param_1 - (longlong)(&ClipboardPasteShim)[(longlong)iVar9 * 7]) /
                  (ulonglong)*(uint *)((longlong)&CrashConfigFolder + lVar8 + 8));
    if (((int)uVar5 < 0) || (*(uint *)(&DAT_154ea44e8 + lVar8) <= uVar5)) {
      bVar4 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
    }
    pFVar7 = TArrayView<FPtrInfo,int>::operator[]
                       ((TArrayView<FPtrInfo,int> *)
                        (&bGEnsureHasExecuted<_2583593239961403004> + lVar8),uVar5);
    return pFVar7->Size;
  }
  if ((this->LargeMemoryPool <= param_1) && (param_1 < this->LargeMemoryPool + 0x200000)) {
    return *(ulong64 *)((longlong)param_1 + -0x10);
  }
  return 0;
}

// GetAllocationSize @ 14163e680

bool __thiscall
FGenericPlatformMallocCrash::GetAllocationSize
          (FGenericPlatformMallocCrash *this,void *param_1,ulong64 *param_2)

{
  ulong64 uVar1;
  
  uVar1 = GetAllocationSize(this,param_1);
  *param_2 = uVar1;
  return true;
}

// GetDescriptiveName @ 141641060

wchar_t * __thiscall
FGenericPlatformMallocCrash::GetDescriptiveName(FGenericPlatformMallocCrash *this)

{
  return L"MallocCrash";
}

// GetPoolDesc @ 1416451d0

FPoolDesc * __thiscall
FGenericPlatformMallocCrash::GetPoolDesc(FGenericPlatformMallocCrash *this,uint param_1)

{
  return AllPoolDesc + param_1;
}

// InitializeSmallPools @ 141649560

void __thiscall FGenericPlatformMallocCrash::InitializeSmallPools(FGenericPlatformMallocCrash *this)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uchar *puVar10;
  longlong lVar11;
  uint *puVar12;
  uchar *puVar13;
  undefined4 uStack_1c;
  
  puVar13 = (uchar *)0x0;
  puVar12 = &AllPoolDesc[0].NumAllocs;
  puVar10 = puVar13;
  while( true ) {
    uVar7 = *puVar12;
    lVar11 = (longlong)(int)puVar10 * 0x38;
    *(uint *)(FMallocCrashPool::BytePools.Pad + lVar11 + 0x10) = ((FPoolDesc *)(puVar12 + -1))->Size
    ;
    puVar6 = FMallocCrashPool::BytePools.Pad + lVar11 + 0x18;
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6[4] = '\0';
    puVar6[5] = '\0';
    puVar6[6] = '\0';
    puVar6[7] = '\0';
    puVar6 = FMallocCrashPool::BytePools.Pad + lVar11 + 0x20;
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    *(uint *)(FMallocCrashPool::BytePools.Pad + lVar11 + 0x30) = uVar7;
    puVar6 = FMallocCrashPool::BytePools.Pad + lVar11;
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6[4] = '\0';
    puVar6[5] = '\0';
    puVar6[6] = '\0';
    puVar6[7] = '\0';
    puVar6 = FMallocCrashPool::BytePools.Pad + lVar11 + 8;
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6[4] = '\0';
    puVar6[5] = '\0';
    puVar6[6] = '\0';
    puVar6[7] = '\0';
    uVar9 = this->BookkeepingPoolOffset;
    uVar8 = uVar7 * 0x10 + uVar9;
    if (this->BookkeepingPoolSize < uVar8) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMallocCrash.cpp"
                         ,0x284,L"");
      puVar6 = puVar13;
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      this->BookkeepingPoolOffset = uVar8;
      puVar6 = this->BookkeepingPool + uVar9;
    }
    if (((int)uVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) break;
    iVar1 = *(int *)(FMallocCrashPool::BytePools.Pad + lVar11 + 0x30);
    iVar2 = *(int *)(FMallocCrashPool::BytePools.Pad + lVar11 + 0x10);
    *(uchar **)(FMallocCrashPool::BytePools.Pad + lVar11 + 0x18) = puVar6;
    *(ulonglong *)(FMallocCrashPool::BytePools.Pad + lVar11 + 0x20) = CONCAT44(uStack_1c,uVar7);
    uVar7 = this->SmallMemoryPoolOffset;
    uVar9 = iVar1 * iVar2 + uVar7;
    if (this->SmallMemoryPoolSize < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMallocCrash.cpp"
                         ,0x277,L"");
      puVar6 = puVar13;
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      this->SmallMemoryPoolOffset = uVar9;
      puVar6 = this->SmallMemoryPool + uVar7;
    }
    iVar1 = *(int *)(FMallocCrashPool::BytePools.Pad + lVar11 + 0x30);
    *(uchar **)(FMallocCrashPool::BytePools.Pad + lVar11 + 0x28) = puVar6;
    uVar7 = 0;
    puVar6 = puVar13;
    if (iVar1 != 0) {
      do {
        uVar9 = (uint)puVar6;
        uVar7 = 0;
        if ((int)uVar9 < *(int *)(FMallocCrashPool::BytePools.Pad + lVar11 + 0x20)) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = *(longlong *)(FMallocCrashPool::BytePools.Pad + lVar11 + 0x18);
        *(ulonglong *)(lVar3 + 8 + (longlong)(int)uVar9 * 0x10) =
             (ulonglong)(uVar9 * *(int *)(FMallocCrashPool::BytePools.Pad + lVar11 + 0x10)) +
             *(longlong *)(FMallocCrashPool::BytePools.Pad + lVar11 + 0x28);
        *(undefined8 *)(lVar3 + (longlong)(int)uVar9 * 0x10) = 0;
        uVar7 = *(uint *)(FMallocCrashPool::BytePools.Pad + lVar11 + 0x30);
        puVar6 = (uchar *)(ulonglong)(uVar9 + 1);
      } while (uVar9 + 1 < uVar7);
    }
    uVar9 = (int)puVar10 + 1;
    puVar10 = (uchar *)(ulonglong)uVar9;
    puVar12 = puVar12 + 2;
    *(uint *)(FMallocCrashPool::BytePools.Pad + lVar11 + 0x34) =
         (*(int *)(FMallocCrashPool::BytePools.Pad + lVar11 + 0x10) + 0x10) * uVar7;
    if (0xd < uVar9) {
      uVar7 = this->SmallMemoryPoolOffset;
      uVar9 = CalculateSmallPoolTotalSize(this);
      if ((uVar9 < uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SmallMemoryPoolOffset<=CalculateSmallPoolTotalSize()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMallocCrash.cpp"
                             ,0x24e,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      return;
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// IsActive @ 141649c00

bool __cdecl FGenericPlatformMallocCrash::IsActive(void)

{
  return GIsMallocCrashActive;
}

// IsInternallyThreadSafe @ 141649f90

bool __thiscall
FGenericPlatformMallocCrash::IsInternallyThreadSafe(FGenericPlatformMallocCrash *this)

{
  return true;
}

// IsPtrInLargePool @ 14164a1d0

bool __thiscall
FGenericPlatformMallocCrash::IsPtrInLargePool(FGenericPlatformMallocCrash *this,void *param_1)

{
  if ((this->LargeMemoryPool <= param_1) && (param_1 < this->LargeMemoryPool + 0x200000)) {
    return true;
  }
  return false;
}

// IsPtrInSmallPool @ 14164a1f0

bool __thiscall
FGenericPlatformMallocCrash::IsPtrInSmallPool(FGenericPlatformMallocCrash *this,void *param_1)

{
  if ((this->SmallMemoryPool <= param_1) &&
     (param_1 < this->SmallMemoryPool + this->SmallMemoryPoolSize)) {
    return true;
  }
  return false;
}

// Malloc @ 14164d710

void * __thiscall
FGenericPlatformMallocCrash::Malloc(FGenericPlatformMallocCrash *this,ulong64 param_1,uint param_2)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  DWORD DVar4;
  uint uVar5;
  void *pvVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong *puVar9;
  
  if (0x10 < param_2) {
    bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar2)();
      return pvVar6;
    }
    FWindowsPlatformMisc::LocalPrint(L"Alignment > 16 is not supported\n");
  }
  DVar4 = GetCurrentThreadId();
  if (this->CrashedThreadId != DVar4) {
    if ((GMallocCrashNonCrashedThreadsMode != 0) && (GMallocCrashNonCrashedThreadsMode != 1)) {
      return (void *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    FWindowsPlatformProcess::SleepInfinite();
  }
  uVar5 = 0;
  uVar8 = uVar5;
  while( true ) {
    lVar7 = (longlong)(int)uVar8 * 0x38;
    puVar1 = FMallocCrashPool::BytePools.Pad + lVar7;
    if ((*(uint *)puVar1 < *(uint *)(FMallocCrashPool::BytePools.Pad + lVar7 + 0x30)) &&
       ((uint)param_1 <= *(uint *)(FMallocCrashPool::BytePools.Pad + lVar7 + 0x10))) break;
    uVar8 = uVar8 + 1;
    if (0xd < uVar8) {
LAB_14164d78f:
      uVar5 = this->LargeMemoryPoolOffset + 0xf & 0xfffffff0;
      uVar8 = (uint)param_1 + 0x10 + uVar5;
      this->LargeMemoryPoolOffset = uVar5;
      if (uVar8 < 0x200001) {
        this->LargeMemoryPoolOffset = uVar8;
        puVar9 = (ulonglong *)(this->LargeMemoryPool + uVar5);
        *puVar9 = param_1 & 0xffffffff;
        puVar9[1] = (ulonglong)(this->LargeMemoryPool + (ulonglong)uVar5 + 0x10);
        FGenericPlatformMisc::LowLevelOutputDebugStringf
                  (L"Malloc Size=%d LargeMemoryPoolOffset=%d \n");
        return (void *)puVar9[1];
      }
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (L"MallocCrash run out of memory allocating %u bytes, free %u bytes\n");
      FWindowsPlatformMisc::LocalPrint(L"Please increase LARGE_MEMORYPOOL_SIZE, exiting...\n");
      bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (!bVar3) {
        FWindowsPlatformMisc::RequestExit(true,L"GenericPlatformmallocCrash::Malloc.OutOfMemory");
        return (void *)0x0;
      }
      pcVar2 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar2)();
      return pvVar6;
    }
  }
  if (puVar1 != (uchar *)0x0) {
    if (*(int *)(FMallocCrashPool::BytePools.Pad + lVar7 + 0x30) == 0) goto LAB_14164d871;
    goto LAB_14164d810;
  }
  goto LAB_14164d78f;
LAB_14164d810:
  uVar8 = 0;
  if ((int)uVar5 < *(int *)(FMallocCrashPool::BytePools.Pad + lVar7 + 0x20)) {
    uVar8 = ~uVar5 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar2)();
    return pvVar6;
  }
  puVar9 = (ulonglong *)
           ((longlong)(int)uVar5 * 0x10 +
           *(longlong *)(FMallocCrashPool::BytePools.Pad + lVar7 + 0x18));
  if (*puVar9 == 0) {
    if (uVar5 < *(uint *)(FMallocCrashPool::BytePools.Pad + lVar7 + 4)) {
      uVar5 = *(uint *)(FMallocCrashPool::BytePools.Pad + lVar7 + 4);
    }
    *(uint *)(FMallocCrashPool::BytePools.Pad + lVar7 + 4) = uVar5;
    if (puVar9 != (ulonglong *)0x0) {
      *(uint *)puVar1 = *(uint *)puVar1 + 1;
      uVar5 = *(uint *)puVar1;
      *(int *)(FMallocCrashPool::BytePools.Pad + lVar7 + 0xc) =
           *(int *)(FMallocCrashPool::BytePools.Pad + lVar7 + 0xc) + 1;
      if (uVar5 < *(uint *)(FMallocCrashPool::BytePools.Pad + lVar7 + 8)) {
        uVar5 = *(uint *)(FMallocCrashPool::BytePools.Pad + lVar7 + 8);
      }
      *(uint *)(FMallocCrashPool::BytePools.Pad + lVar7 + 8) = uVar5;
      *puVar9 = param_1 & 0xffffffff;
      memset((void *)puVar9[1],0xfe,param_1 & 0xffffffff);
      return (void *)puVar9[1];
    }
    goto LAB_14164d871;
  }
  uVar5 = uVar5 + 1;
  if (*(uint *)(FMallocCrashPool::BytePools.Pad + lVar7 + 0x30) <= uVar5) {
LAB_14164d871:
    bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (!bVar3) {
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (L"AllocateFromPool run out of memory allocating %u bytes for %u allocations\n");
      FWindowsPlatformMisc::LocalPrint
                (L"Please increase MaxNumAllocations for that pool, exiting...\n");
      FWindowsPlatformMisc::RequestExit(true,L"GenericPlatformmallocCrash::AllocateFromPool");
      return (void *)0x0;
    }
    pcVar2 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar2)();
    return pvVar6;
  }
  goto LAB_14164d810;
}

// PrintPoolsUsage @ 141650800

void __thiscall FGenericPlatformMallocCrash::PrintPoolsUsage(FGenericPlatformMallocCrash *this)

{
  return;
}

// Realloc @ 141652500

void * __thiscall
FGenericPlatformMallocCrash::Realloc
          (FGenericPlatformMallocCrash *this,void *param_1,ulong64 param_2,uint param_3)

{
  wchar_t wVar1;
  wchar_t wVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  void *pvVar6;
  wchar_t *pwVar7;
  ulong64 _Size;
  ulong64 local_28 [2];
  
  DVar4 = GetCurrentThreadId();
  if (this->CrashedThreadId != DVar4) {
    if ((GMallocCrashNonCrashedThreadsMode != 0) && (GMallocCrashNonCrashedThreadsMode != 1)) {
      return (void *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    FWindowsPlatformProcess::SleepInfinite();
  }
  if (param_1 == (void *)0x0) {
    pvVar6 = Malloc(this,param_2,0x10);
    return pvVar6;
  }
  if (param_2 == 0) {
    Free(this,param_1);
    return (void *)0x0;
  }
  local_28[0] = 0;
  if (((this->LargeMemoryPool <= param_1) && (param_1 < this->LargeMemoryPool + 0x200000)) ||
     ((this->SmallMemoryPool <= param_1 &&
      (param_1 < this->SmallMemoryPool + this->SmallMemoryPoolSize)))) {
    local_28[0] = GetAllocationSize(this,param_1);
    goto LAB_1416525fa;
  }
  pwVar7 = L"binned";
  lVar5 = (**(code **)((longlong)*this->PreviousMalloc + 200))();
  do {
    while( true ) {
      wVar1 = *(wchar_t *)(lVar5 + -0x1506434e0 + (longlong)pwVar7);
      wVar2 = *pwVar7;
      pwVar7 = pwVar7 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') goto LAB_1416525bd;
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) goto LAB_1416525bd;
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  pwVar7 = L"binned2";
  lVar5 = (**(code **)((longlong)*this->PreviousMalloc + 200))();
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)pwVar7 + lVar5 + -0x1506434f0);
      wVar2 = *pwVar7;
      pwVar7 = pwVar7 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') goto LAB_1416525bd;
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) goto LAB_1416525bd;
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  pwVar7 = L"binned3";
  lVar5 = (**(code **)((longlong)*this->PreviousMalloc + 200))();
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)pwVar7 + lVar5 + -0x150643500);
      wVar2 = *pwVar7;
      pwVar7 = pwVar7 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') goto LAB_1416525bd;
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) goto LAB_1416525bd;
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  pwVar7 = L"jemalloc";
  lVar5 = (**(code **)((longlong)*this->PreviousMalloc + 200))();
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)pwVar7 + lVar5 + -0x150643510);
      wVar2 = *pwVar7;
      pwVar7 = pwVar7 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') goto LAB_1416525bd;
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) goto LAB_1416525bd;
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  FWindowsPlatformMisc::LocalPrint
            (
            L"Realloc from previous malloc - we don\'t know how to get allocation size, exiting...\n"
            );
  pwVar7 = L"GenericPlatformmallocCrash::Realloc.CanNotHandleMissingAllocationSize";
LAB_1416525ee:
  FWindowsPlatformMisc::RequestExit(true,pwVar7);
LAB_1416525fa:
  pvVar6 = Malloc(this,param_2,0x10);
  _Size = local_28[0];
  if (param_2 < local_28[0]) {
    _Size = param_2;
  }
  memcpy(pvVar6,param_1,_Size);
  if (0x8000 < local_28[0]) {
    FGenericPlatformMisc::LowLevelOutputDebugStringf
              (L"Realloc PtrSize=%u NewSize=%u PooledPtr=0x%016llx\n");
  }
  Free(this,param_1);
  return pvVar6;
LAB_1416525bd:
  cVar3 = (**(code **)((longlong)*this->PreviousMalloc + 0x68))
                    (this->PreviousMalloc,param_1,local_28);
  if ((cVar3 != '\0') && (local_28[0] != 0)) goto LAB_1416525fa;
  FWindowsPlatformMisc::LocalPrint
            (
            L"Realloc from previous malloc - we were not able to get correct allocation size, exiting...\n"
            );
  pwVar7 = L"GenericPlatformmallocCrash::Realloc.InvalidAllocationSize";
  goto LAB_1416525ee;
}

// SafePageSize @ 1416595b0

uint __cdecl FGenericPlatformMallocCrash::SafePageSize(void)

{
  uint uVar1;
  FPlatformMemoryStats *pFVar2;
  FPlatformMemoryStats local_98;
  
  pFVar2 = FWindowsPlatformMemory::GetStats(&local_98);
  uVar1 = (uint)pFVar2->_padding_;
  if (uVar1 == 0) {
    uVar1 = 0x10000;
  }
  return uVar1;
}

// SetAsGMalloc @ 14165cd70

/* WARNING: Removing unreachable block (ram,0x00014165cd8e) */

void __thiscall FGenericPlatformMallocCrash::SetAsGMalloc(FGenericPlatformMallocCrash *this)

{
  DWORD DVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&this->InternalLock);
  LOCK();
  UNLOCK();
  UE::Private::GMalloc = (FMalloc *)this;
  DVar1 = GetCurrentThreadId();
  this->CrashedThreadId = DVar1;
  GIsMallocCrashActive = true;
  return;
}

// ValidateHeap @ 141669010

bool __thiscall FGenericPlatformMallocCrash::ValidateHeap(FGenericPlatformMallocCrash *this)

{
  return true;
}

