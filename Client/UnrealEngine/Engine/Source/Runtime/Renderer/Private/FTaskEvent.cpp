// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FTaskEvent @ 14551ed40

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTaskEvent * __thiscall UE::Tasks::FTaskEvent::FTaskEvent(FTaskEvent *this,wchar_t *param_1)

{
  FTaskEvent this_00;
  
  this_00 = (FTaskEvent)
            TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::TaskEventBaseAllocator);
  if (this_00 != (FTaskEvent)0x0) {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)this_00,1,true);
    *(undefined ***)this_00 = &___7FTaskEventBase_Private_Tasks_UE__6B_;
    TaskTrace::Created((ulong64)*(atomic<unsigned___int64> *)((longlong)this_00 + 0x50),0xd8);
    Tasks::Private::FTaskBase::Init((FTaskBase *)this_00,param_1,Default,TaskEvent,None);
    *this = this_00;
    return this;
  }
  *this = (FTaskEvent)0x0;
  return this;
}

