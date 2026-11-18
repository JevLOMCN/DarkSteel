// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 5

// ResizeAllocation<TSizedDefaultAllocator<32>_> @ 14a966870

void __thiscall
UE::Mutable::Private::
TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>
::ForAnyElementType::ResizeAllocation<TSizedDefaultAllocator<32>_>
          (ForAnyElementType *this,int param_1,int param_2,ulong64 param_3,uint param_4)

{
  atomic<__int64> aVar1;
  code *pcVar2;
  bool bVar3;
  atomic<__int64> *paVar4;
  longlong lVar5;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)this,param_1,param_2,param_3,param_4);
  lVar5 = (longlong)param_2 * param_3 - this->AllocSize;
  paVar4 = MemoryCounters::FInternalMemoryCounter::Get();
  LOCK();
  aVar1 = *paVar4;
  *paVar4 = (atomic<__int64>)((longlong)*paVar4 + lVar5);
  UNLOCK();
  if ((longlong)aVar1 < this->AllocSize) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrevCounterValue >= AllocSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\MemoryTrackingAllocationPolicy.h"
                       ,0x75,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FGlobalMemoryCounter::Update(lVar5);
  this->AllocSize = (longlong)param_2 * param_3;
  return;
}

// ResizeAllocation<TSizedDefaultAllocator<32>_> @ 14a966900

void __thiscall
UE::Mutable::Private::
TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>
::ForAnyElementType::ResizeAllocation<TSizedDefaultAllocator<32>_>
          (ForAnyElementType *this,int param_1,int param_2,ulong64 param_3,uint param_4)

{
  atomic<__int64> aVar1;
  code *pcVar2;
  bool bVar3;
  atomic<__int64> *paVar4;
  longlong lVar5;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)this,param_1,param_2,param_3,param_4);
  lVar5 = (longlong)param_2 * param_3 - this->AllocSize;
  paVar4 = MemoryCounters::FMeshMemoryCounter::Get();
  LOCK();
  aVar1 = *paVar4;
  *paVar4 = (atomic<__int64>)((longlong)*paVar4 + lVar5);
  UNLOCK();
  if ((longlong)aVar1 < this->AllocSize) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrevCounterValue >= AllocSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\MemoryTrackingAllocationPolicy.h"
                       ,0x75,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FGlobalMemoryCounter::Update(lVar5);
  this->AllocSize = (longlong)param_2 * param_3;
  return;
}

// ResizeAllocation @ 14a9c4120

void __thiscall
UE::Mutable::Private::
TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>
::ForAnyElementType::ResizeAllocation
          (ForAnyElementType *this,int param_1,int param_2,ulong64 param_3)

{
  atomic<__int64> aVar1;
  code *pcVar2;
  bool bVar3;
  atomic<__int64> *paVar4;
  longlong lVar5;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)this,param_1,param_2,param_3);
  lVar5 = (longlong)param_2 * param_3 - this->AllocSize;
  paVar4 = MemoryCounters::FInternalMemoryCounter::Get();
  LOCK();
  aVar1 = *paVar4;
  *paVar4 = (atomic<__int64>)((longlong)*paVar4 + lVar5);
  UNLOCK();
  if ((longlong)aVar1 < this->AllocSize) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrevCounterValue >= AllocSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\MemoryTrackingAllocationPolicy.h"
                       ,0x5c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FGlobalMemoryCounter::Update(lVar5);
  this->AllocSize = (longlong)param_2 * param_3;
  return;
}

// ResizeAllocation<TSizedDefaultAllocator<32>_> @ 14aa91a80

void __thiscall
UE::Mutable::Private::
TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>
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
  aVar2 = (atomic<__int64>)((longlong)::Counter + lVar4);
  UNLOCK();
  bVar3 = (longlong)::Counter < this->AllocSize;
  ::Counter = aVar2;
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

// ResizeAllocation<TSizedDefaultAllocator<32>_> @ 14aa91b10

void __thiscall
UE::Mutable::Private::
TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FStreamingMemoryCounter>
::ForAnyElementType::ResizeAllocation<TSizedDefaultAllocator<32>_>
          (ForAnyElementType *this,int param_1,int param_2,ulong64 param_3,uint param_4)

{
  atomic<__int64> aVar1;
  code *pcVar2;
  bool bVar3;
  atomic<__int64> *paVar4;
  longlong lVar5;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)this,param_1,param_2,param_3,param_4);
  lVar5 = (longlong)param_2 * param_3 - this->AllocSize;
  paVar4 = MemoryCounters::FStreamingMemoryCounter::Get();
  LOCK();
  aVar1 = *paVar4;
  *paVar4 = (atomic<__int64>)((longlong)*paVar4 + lVar5);
  UNLOCK();
  if ((longlong)aVar1 < this->AllocSize) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrevCounterValue >= AllocSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\MemoryTrackingAllocationPolicy.h"
                       ,0x75,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FGlobalMemoryCounter::Update(lVar5);
  this->AllocSize = (longlong)param_2 * param_3;
  return;
}

