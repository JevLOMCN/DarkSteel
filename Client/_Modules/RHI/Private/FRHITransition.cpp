// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Cleanup @ 145cd8400

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRHITransition::Cleanup(FRHITransition *this)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ERHIPipeline *pEVar7;
  
  (**(code **)(GDynamicRHI->_padding_ + 0xd0))();
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  plVar5 = &this->_padding_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  lVar4 = 2;
  lVar6 = 2;
  do {
    plVar1 = plVar5 + -2;
    plVar5 = plVar5 + -2;
    lVar6 = lVar6 + -1;
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
  } while (lVar6 != 0);
  plVar5 = &this->_padding_;
  do {
    plVar1 = plVar5 + -2;
    plVar5 = plVar5 + -2;
    lVar4 = lVar4 + -1;
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
  } while (lVar4 != 0);
  pEVar7 = &this[-1].AllowedSrc;
  MemoryTrace_Free((ulong64)pEVar7,0,0);
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    this_00 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this_00 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pEVar7,FMalloc,true);
  }
  uVar3._0_1_ = this[-1].AllowedSrc;
  uVar3._1_1_ = this[-1].AllowedDst;
  uVar3._2_2_ = *(undefined2 *)&this[-1].field_0x8a;
  pEVar7 = pEVar7 + -(ulonglong)uVar3;
  LOCK();
  iVar2 = *(int *)pEVar7;
  *(int *)pEVar7 = *(int *)pEVar7 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    lVar4 = *(longlong *)(pEVar7 + 0x40);
    MemoryTrace_UnmarkAllocAsHeap((ulong64)pEVar7,0,0);
    if (lVar4 - (longlong)pEVar7 == 0x10000) {
      this_01 = FPageAllocator::Get();
      FPageAllocator::Free(this_01,pEVar7);
    }
    else {
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pEVar7);
    }
  }
  return;
}

