// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ~FScopedStackAllocatorBookmark @ 141816bb0

void __thiscall
FScopedStackAllocatorBookmark::~FScopedStackAllocatorBookmark(FScopedStackAllocatorBookmark *this)

{
  EVirtualStackAllocatorDecommitMode EVar1;
  uint uVar2;
  FVirtualStackAllocator *this_00;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  longlong lVar7;
  void *pvVar8;
  
  if (this->RestorePointer == (void *)0x0) {
    return;
  }
  if ((this->Owner == (FVirtualStackAllocator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Memory\\VirtualStackAllocator.cpp"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = this->Owner;
  pvVar8 = this->RestorePointer;
  if ((this_00->NextAllocationStart < pvVar8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RestorePointer <= NextAllocationStart",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\VirtualStackAllocator.h"
                         ,0x6f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pvVar3 = *(void **)&this_00->VirtualMemory;
  this_00->NextAllocationStart = pvVar8;
  if (pvVar8 != pvVar3) {
    return;
  }
  EVar1 = this_00->DecommitMode;
  if (EVar1 == AllOnDestruction) {
    return;
  }
  if (EVar1 == AllOnStackEmpty) {
    uVar2 = *(uint *)&(this_00->VirtualMemory).field_0x8;
    uVar6 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment();
    FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Decommit
              (&this_00->VirtualMemory,0,uVar6 * uVar2);
    pvVar8 = *(void **)&this_00->VirtualMemory;
  }
  else {
    if (EVar1 != ExcessOnStackEmpty) goto LAB_141816c9a;
    lVar7 = (longlong)this_00->NextUncommittedPage - (longlong)pvVar3;
    uVar6 = (longlong)this_00->NextUncommittedPage - (longlong)this_00->RecentHighWaterMark;
    if ((longlong)uVar6 <= (longlong)(lVar7 + (ulonglong)((uint)(lVar7 >> 0x3f) & 3)) >> 2)
    goto LAB_141816c9a;
    FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Decommit
              (&this_00->VirtualMemory,(longlong)this_00->RecentHighWaterMark - (longlong)pvVar3,
               uVar6);
    pvVar8 = this_00->RecentHighWaterMark;
  }
  this_00->NextUncommittedPage = pvVar8;
LAB_141816c9a:
  this_00->RecentHighWaterMark = *(void **)&this_00->VirtualMemory;
  return;
}

