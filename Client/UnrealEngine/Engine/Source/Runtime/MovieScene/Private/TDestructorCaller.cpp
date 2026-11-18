// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// Destruct @ 14612c520

void __cdecl UE::Core::Private::TDestructorCaller<unsigned_short>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14612c530

void __cdecl
UE::Core::Private::TDestructorCaller<UE::MovieScene::FCachedProperty>::Destruct(void *param_1)

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

// Destruct @ 14612c550

void __cdecl
UE::Core::Private::TDestructorCaller<UE::MovieScene::FCustomPropertyIndex>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14612c560

void __cdecl
UE::Core::Private::TDestructorCaller<UE::MovieScene::FVolatileProperty>::Destruct(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Destruct @ 14612c5b0

void __cdecl
UE::Core::Private::TDestructorCaller<TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct
          (void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 1462abdc0

void __cdecl
UE::Core::Private::TDestructorCaller<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>_>::Destruct
          (void *param_1)

{
  return;
}

