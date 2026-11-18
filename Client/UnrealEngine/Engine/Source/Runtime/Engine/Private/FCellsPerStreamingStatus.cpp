// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FCellsPerStreamingStatus @ 148ab3610

FCellsPerStreamingStatus * __thiscall
`UWorldPartitionLevelStreamingPolicy::DrawRuntimeCellsDetails'::__l2::FCellsPerStreamingStatus::
FCellsPerStreamingStatus(void *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  return this;
}

// ~FCellsPerStreamingStatus @ 148ab7050

void __thiscall
`UWorldPartitionLevelStreamingPolicy::DrawRuntimeCellsDetails'::__l2::FCellsPerStreamingStatus::
~FCellsPerStreamingStatus(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

