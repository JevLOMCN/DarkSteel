// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FVirtualStackAllocator @ 141815d10

FVirtualStackAllocator * __thiscall
FVirtualStackAllocator::FVirtualStackAllocator
          (FVirtualStackAllocator *this,ulong64 param_1,EVirtualStackAllocatorDecommitMode param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  FPlatformVirtualMemoryBlock *pFVar4;
  ulonglong uVar5;
  FPlatformVirtualMemoryBlock local_18;
  
  *(undefined8 *)&this->VirtualMemory = 0;
  *(undefined4 *)&(this->VirtualMemory).field_0x8 = 0;
  this->NextUncommittedPage = (void *)0x0;
  this->RecentHighWaterMark = (void *)0x0;
  this->NextAllocationStart = (void *)0x0;
  uVar3 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetCommitAlignment();
  this->PageSize = uVar3;
  this->DecommitMode = param_2;
  uVar5 = (param_1 - 1) + uVar3 & -uVar3;
  this->TotalReservationSize = uVar5;
  if (uVar5 != 0) {
    uVar3 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment();
    pFVar4 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::AllocateVirtual
                       (&local_18,this->TotalReservationSize,uVar3);
    uVar2 = *(undefined8 *)&pFVar4->field_0x8;
    *(undefined8 *)&this->VirtualMemory = *(undefined8 *)pFVar4;
    *(undefined8 *)&(this->VirtualMemory).field_0x8 = uVar2;
    pvVar1 = *(void **)&this->VirtualMemory;
    this->NextUncommittedPage = pvVar1;
    this->NextAllocationStart = pvVar1;
    this->RecentHighWaterMark = pvVar1;
  }
  return this;
}

// ~FVirtualStackAllocator @ 141816cc0

void __thiscall FVirtualStackAllocator::~FVirtualStackAllocator(FVirtualStackAllocator *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->NextAllocationStart != *(void **)&this->VirtualMemory) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetAllocatedBytes() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Memory\\VirtualStackAllocator.cpp"
                       ,0x37,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->NextUncommittedPage != (void *)0x0) {
    FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::FreeVirtual(&this->VirtualMemory);
    return;
  }
  return;
}

// Allocate @ 14181b850

void * __thiscall
FVirtualStackAllocator::Allocate(FVirtualStackAllocator *this,ulong64 param_1,ulong64 param_2)

{
  void *pvVar1;
  void *pvVar2;
  FLowLevelMemTracker *this_00;
  ulong64 uVar3;
  ulonglong uVar4;
  void *pvVar5;
  
  pvVar5 = (void *)((longlong)this->NextAllocationStart + (param_2 - 1) & -param_2);
  if (param_1 != 0) {
    pvVar1 = (void *)((longlong)pvVar5 + param_1);
    uVar3 = this->PageSize;
    if ((void *)((this->TotalReservationSize - uVar3) + *(longlong *)&this->VirtualMemory) < pvVar1)
    {
                    /* WARNING: Subroutine does not return */
      FGenericPlatformMemory::OnOutOfMemory(param_1,(uint)param_2);
    }
    pvVar2 = this->NextUncommittedPage;
    if (pvVar2 < pvVar1) {
      uVar4 = (uVar3 - (longlong)pvVar2) + -1 + (longlong)pvVar1 & ~(uVar3 - 1);
      FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Commit
                (&this->VirtualMemory,(longlong)pvVar2 - *(longlong *)&this->VirtualMemory,uVar4);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this_00 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this_00 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelAlloc
                  (this_00,Default,this->NextUncommittedPage,uVar4,
                   LLMTagDeclaration_VirtualStackAllocator.UniqueName,None,true);
      }
      uVar3 = this->PageSize;
      this->NextUncommittedPage = (void *)((uVar3 - 1) + (longlong)pvVar1 & -uVar3);
    }
    if (this->RecentHighWaterMark < pvVar1) {
      this->RecentHighWaterMark = (void *)((longlong)pvVar1 + (uVar3 - 1) & -uVar3);
    }
    this->NextAllocationStart = pvVar1;
  }
  return pvVar5;
}

// DecommitUnusedPages @ 1418200f0

void __thiscall FVirtualStackAllocator::DecommitUnusedPages(FVirtualStackAllocator *this)

{
  uint uVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  longlong lVar6;
  
  if (this->NextAllocationStart != *(void **)&this->VirtualMemory) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NextAllocationStart == VirtualMemory.GetVirtualPointer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Memory\\VirtualStackAllocator.cpp"
                       ,0x71,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->DecommitMode == AllOnStackEmpty) {
    uVar1 = *(uint *)&(this->VirtualMemory).field_0x8;
    uVar5 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment();
    FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Decommit
              (&this->VirtualMemory,0,uVar5 * uVar1);
    this->NextUncommittedPage = *(void **)&this->VirtualMemory;
    this->RecentHighWaterMark = *(void **)&this->VirtualMemory;
    return;
  }
  if (this->DecommitMode == ExcessOnStackEmpty) {
    pvVar2 = *(void **)&this->VirtualMemory;
    lVar6 = (longlong)this->NextUncommittedPage - (longlong)pvVar2;
    uVar5 = (longlong)this->NextUncommittedPage - (longlong)this->RecentHighWaterMark;
    if ((longlong)uVar5 <= (longlong)(lVar6 + (ulonglong)((uint)(lVar6 >> 0x3f) & 3)) >> 2) {
      this->RecentHighWaterMark = pvVar2;
      return;
    }
    FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Decommit
              (&this->VirtualMemory,(longlong)this->RecentHighWaterMark - (longlong)pvVar2,uVar5);
    this->NextUncommittedPage = this->RecentHighWaterMark;
  }
  this->RecentHighWaterMark = *(void **)&this->VirtualMemory;
  return;
}

