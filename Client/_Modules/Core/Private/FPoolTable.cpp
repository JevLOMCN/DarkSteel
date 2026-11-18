// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// FPoolTable @ 14167a830

FPoolTable * __thiscall FMallocBinned2::FPoolTable::FPoolTable(FPoolTable *this)

{
  (this->ActivePools).Front = (FPoolInfo *)0x0;
  (this->ExhaustedPools).Front = (FPoolInfo *)0x0;
  this->BinSize = 0;
  this->TotalUsedBins = 0;
  this->TotalAllocatedBins = 0;
  this->TotalAllocatedMem = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->Mutex,4000);
  return this;
}

// FPoolTable @ 14167a870

FPoolTable * __thiscall FMallocBinned3::FPoolTable::FPoolTable(FPoolTable *this)

{
  this->NumEverUsedBlocks = 0;
  (this->BlocksAllocatedBits).Bits = (ulong64 *)0x0;
  (this->BlocksExhaustedBits).Bits = (ulong64 *)0x0;
  this->UnusedAreaOffsetLow = 0;
  this->TotalUsedBins = 0;
  this->TotalAllocatedBins = 0;
  this->TotalAllocatedMem = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->Mutex,4000);
  this->TotalRequestedAllocSize = (atomic<__int64>)0x0;
  this->TotalAllocCount = (atomic<__int64>)0x0;
  this->TotalFreeCount = (atomic<__int64>)0x0;
  return this;
}

// FPoolTable @ 14167a8d0

FPoolTable * __thiscall FMallocBinned::FPoolTable::FPoolTable(FPoolTable *this)

{
  this->FirstPool = (FPoolInfo *)0x0;
  this->ExhaustedPool = (FPoolInfo *)0x0;
  this->BlockSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  this->NumActivePools = 0;
  this->MaxActivePools = 0;
  this->ActiveRequests = 0;
  this->MaxActiveRequests = 0;
  this->MinRequest = 0;
  this->MaxRequest = 0;
  this->TotalRequests = 0;
  this->TotalWaste = 0;
  return this;
}

// ~FPoolTable @ 14167c510

void __thiscall FMallocBinned2::FPoolTable::~FPoolTable(FPoolTable *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014167c514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
  return;
}

// ~FPoolTable @ 14167c530

void __thiscall FMallocBinned3::FPoolTable::~FPoolTable(FPoolTable *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014167c534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
  return;
}

// ~FPoolTable @ 14167c550

void __thiscall FMallocBinned::FPoolTable::~FPoolTable(FPoolTable *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014167c554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

// HeadEndAlloc @ 1416a21c0

void __thiscall FMallocBinned3::FPoolTable::HeadEndAlloc(FPoolTable *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->BinSize < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Size >= 0 && Size <= BinSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinned3.h"
                       ,0xa4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  LOCK();
  this->TotalRequestedAllocSize =
       (atomic<__int64>)((longlong)this->TotalRequestedAllocSize + param_1);
  UNLOCK();
  LOCK();
  this->TotalAllocCount = (atomic<__int64>)((longlong)this->TotalAllocCount + 1);
  UNLOCK();
  return;
}

