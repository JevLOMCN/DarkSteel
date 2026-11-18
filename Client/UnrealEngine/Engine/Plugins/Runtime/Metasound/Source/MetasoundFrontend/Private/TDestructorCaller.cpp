// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// Destruct @ 14ae6d370

void __cdecl UE::Core::Private::TDestructorCaller<FMetasoundFrontendClass>::Destruct(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)param_1 + 0x50),
             *(int *)((longlong)param_1 + 0x58));
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
    return;
  }
  return;
}

// Destruct @ 14ae6d3c0

void __cdecl
UE::Core::Private::TDestructorCaller<FMetasoundFrontendInterface>::Destruct(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14ae6d420

void __cdecl
UE::Core::Private::TDestructorCaller<FMetasoundFrontendVersion>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14ae6d430

void __cdecl
UE::Core::Private::TDestructorCaller<Metasound::FFrontendQueryKey::FNull>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14ae6d440

void __cdecl
UE::Core::Private::TDestructorCaller<Metasound::Frontend::FInterfaceRegistryTransaction>::Destruct
          (void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
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

// Destruct @ 14ae6d460

void __cdecl
UE::Core::Private::TDestructorCaller<Metasound::Frontend::FNodeClassRegistryTransaction>::Destruct
          (void *param_1)

{
  return;
}

