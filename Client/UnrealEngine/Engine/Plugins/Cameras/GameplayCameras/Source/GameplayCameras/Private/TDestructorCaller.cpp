// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// Destruct @ 14d552860

void __cdecl
UE::Core::Private::
TDestructorCaller<TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
::Destruct(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// Destruct @ 14d552880

void __cdecl
UE::Core::Private::
TDestructorCaller<TArray<TObjectPtr<UCameraNode>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
::Destruct(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// Destruct @ 14d5528a0

void __cdecl
UE::Core::Private::TDestructorCaller<TArrayView<UE::Cameras::FCameraNodeEvaluator_*,int>_>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14d5528b0

void __cdecl
UE::Core::Private::TDestructorCaller<TArrayView<TObjectPtr<UCameraNode>,int>_>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14d59e1f0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Cameras::FCameraDebugClock::FAngleValue>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14d59e200

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Cameras::FCameraDebugClock::FVectorValue>::Destruct
          (void *param_1)

{
  return;
}

