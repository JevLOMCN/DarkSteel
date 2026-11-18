// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// operator() @ 1416db360

void * __thiscall `FMemory_MallocInline'::__l2::<lambda_1>::operator()(void *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  FLowLevelMemTracker *this_00;
  
  if (UE::Private::GMalloc == (FMalloc *)0x0) {
    uVar1 = *(undefined4 *)((longlong)this + 8);
    uVar2 = *(undefined8 *)this;
    FMemory::GCreateMalloc();
    pvVar3 = (void *)(**(code **)((longlong)*UE::Private::GMalloc + 0x28))
                               (UE::Private::GMalloc,uVar2,uVar1);
  }
  else {
    DoGamethreadHook(0);
    pvVar3 = (void *)(**(code **)((longlong)*UE::Private::GMalloc + 0x28))
                               (UE::Private::GMalloc,*(undefined8 *)this,
                                *(undefined4 *)((longlong)this + 8));
  }
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    this_00 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this_00 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelAlloc
              (this_00,Default,pvVar3,*(ulong64 *)this,Untagged,FMalloc,true);
  }
  return pvVar3;
}

