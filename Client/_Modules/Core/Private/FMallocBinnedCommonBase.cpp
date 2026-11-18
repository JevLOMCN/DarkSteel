// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// GetAllocatorStatsInternal @ 141699050

void __thiscall
FMallocBinnedCommonBase::GetAllocatorStatsInternal
          (FMallocBinnedCommonBase *this,FGenericMemoryStats *param_1,long64 param_2)

{
  atomic<__int64> aVar1;
  atomic<__int64> aVar2;
  atomic<__int64> aVar3;
  longlong lVar4;
  TStringView<wchar_t> local_28;
  
  aVar3 = AllocatedLargePoolMemoryWAlignment;
  aVar2 = AllocatedLargePoolMemory;
  aVar1 = AllocatedOSSmallPoolMemory;
  local_28.DataPtr = L"AllocatedSmallPoolMemory";
  local_28.Size = 0x18;
  FGenericMemoryStats::Add(param_1,&local_28,param_2);
  local_28.Size = 0x1a;
  local_28.DataPtr = L"AllocatedOSSmallPoolMemory";
  FGenericMemoryStats::Add(param_1,&local_28,(ulong64)aVar1);
  local_28.Size = 0x18;
  local_28.DataPtr = L"AllocatedLargePoolMemory";
  FGenericMemoryStats::Add(param_1,&local_28,(ulong64)aVar2);
  local_28.Size = 0x22;
  local_28.DataPtr = L"AllocatedLargePoolMemoryWAlignment";
  FGenericMemoryStats::Add(param_1,&local_28,(ulong64)aVar3);
  lVar4 = (**(code **)(this->_padding_ + 0xf0))(this);
  local_28.Size = 0xe;
  local_28.DataPtr = L"TotalAllocated";
  FGenericMemoryStats::Add(param_1,&local_28,(longlong)aVar2 + param_2);
  local_28.Size = 0x10;
  local_28.DataPtr = L"TotalOSAllocated";
  FGenericMemoryStats::Add(param_1,&local_28,(longlong)aVar3 + lVar4 + (longlong)aVar1);
  FMalloc::GetAllocatorStats((FMalloc *)this,param_1);
  return;
}

// OnMallocInitialized @ 1416b5470

void __thiscall FMallocBinnedCommonBase::OnMallocInitialized(FMallocBinnedCommonBase *this)

{
  return;
}

// OutOfMemory @ 1416b5db0

void __cdecl FMallocBinnedCommonBase::OutOfMemory(ulong64 param_1,uint param_2)

{
                    /* WARNING: Subroutine does not return */
  FGenericPlatformMemory::OnOutOfMemory(param_1,param_2);
}

// UnrecognizedPointerFatalError @ 1416c5220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMallocBinnedCommonBase::UnrecognizedPointerFatalError(FMallocBinnedCommonBase *this,void *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
                    /* WARNING: Subroutine does not return */
  FWindowsPlatformProcess::SleepInfinite();
}

