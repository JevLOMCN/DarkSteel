// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FIntersectionContour @ 143d912b0

FIntersectionContour * __thiscall
Chaos::Softs::GIA::FIntersectionContour::FIntersectionContour(FIntersectionContour *this)

{
  this->BoundaryEdgeCount = '\0';
  (this->Contour).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Contour).ArrayNum = 0;
  (this->Contour).ArrayMax = 0;
  return this;
}

// ~FIntersectionContour @ 143d928f0

void __thiscall
Chaos::Softs::GIA::FIntersectionContour::~FIntersectionContour(FIntersectionContour *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Contour).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

