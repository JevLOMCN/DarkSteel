// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// ResizeAllocation<TSizedDefaultAllocator<32>_> @ 14ac083f0

void __thiscall
UE::Mutable::Private::
TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FPrefetchMemoryCounter>
::ForAnyElementType::ResizeAllocation<TSizedDefaultAllocator<32>_>
          (ForAnyElementType *this,int param_1,int param_2,ulong64 param_3,uint param_4)

{
  code *pcVar1;
  atomic<__int64> aVar2;
  bool bVar3;
  longlong lVar4;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)this,param_1,param_2,param_3,param_4);
  lVar4 = (longlong)param_2 * param_3 - this->AllocSize;
  LOCK();
  aVar2 = (atomic<__int64>)
          ((longlong)
           `public:_static_struct_std::atomic<__int64>&___ptr64___cdecl_UE::Mutable::Private::MemoryCounters::FPrefetchMemoryCounter::Get(void)'
           ::__l2::Counter + lVar4);
  UNLOCK();
  bVar3 = (longlong)
          `public:_static_struct_std::atomic<__int64>&___ptr64___cdecl_UE::Mutable::Private::MemoryCounters::FPrefetchMemoryCounter::Get(void)'
          ::__l2::Counter < this->AllocSize;
  `public:_static_struct_std::atomic<__int64>&___ptr64___cdecl_UE::Mutable::Private::MemoryCounters::FPrefetchMemoryCounter::Get(void)'
  ::__l2::Counter = aVar2;
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrevCounterValue >= AllocSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\MemoryTrackingAllocationPolicy.h"
                       ,0x75,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FGlobalMemoryCounter::Update(lVar4);
  this->AllocSize = (longlong)param_2 * param_3;
  return;
}

