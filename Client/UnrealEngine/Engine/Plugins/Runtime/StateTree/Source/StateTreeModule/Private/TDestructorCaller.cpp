// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 11

// Destruct @ 14d4baac0

void __cdecl
UE::Core::Private::TDestructorCaller<FStateTreeTraceActiveStatesEvent>::Destruct(void *param_1)

{
  DestructItems<FStateTreeTraceActiveStates::FAssetActiveStates,int>
            (*(FAssetActiveStates **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Destruct @ 14d4bab00

void __cdecl
UE::Core::Private::TDestructorCaller<FStateTreeTraceConditionEvent>::Destruct(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Destruct @ 14d4bab50

void __cdecl
UE::Core::Private::TDestructorCaller<FStateTreeTraceEvaluatorEvent>::Destruct(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Destruct @ 14d4baba0

void __cdecl
UE::Core::Private::TDestructorCaller<FStateTreeTraceInstanceFrameEvent>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14d4babb0

void __cdecl UE::Core::Private::TDestructorCaller<FStateTreeTraceLogEvent>::Destruct(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
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

// Destruct @ 14d4babd0

void __cdecl UE::Core::Private::TDestructorCaller<FStateTreeTraceNodeEvent>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14d4babe0

void __cdecl
UE::Core::Private::TDestructorCaller<FStateTreeTracePhaseEvent>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14d4babf0

void __cdecl
UE::Core::Private::TDestructorCaller<FStateTreeTracePropertyEvent>::Destruct(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
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

// Destruct @ 14d4bac10

void __cdecl
UE::Core::Private::TDestructorCaller<FStateTreeTraceStateEvent>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14d4bac20

void __cdecl UE::Core::Private::TDestructorCaller<FStateTreeTraceTaskEvent>::Destruct(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Destruct @ 14d4bac70

void __cdecl
UE::Core::Private::TDestructorCaller<FStateTreeTraceTransitionEvent>::Destruct(void *param_1)

{
  return;
}

