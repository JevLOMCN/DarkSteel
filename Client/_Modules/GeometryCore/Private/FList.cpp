// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// FList @ 1435e2e00

FList * __thiscall UE::Geometry::TSparseListSet<int>::FList::FList(FList *this)

{
  (this->Blocks).AllocatorInstance.SecondaryData = (ForElementType<int_*>)0x0;
  (this->Blocks).ArrayNum = 0;
  (this->Blocks).ArrayMax = 8;
  this->CurBlock = (int *)0x0;
  this->CurIndex = 0;
  return this;
}

// ~FList @ 1435e4ba0

void __thiscall UE::Geometry::TSparseListSet<int>::FList::~FList(FList *this)

{
  ForElementType<int_*> FVar1;
  FLowLevelMemTracker *this_00;
  
  FVar1 = (this->Blocks).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<int_*>)0x0) {
    return;
  }
  if (FVar1 != (ForElementType<int_*>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

