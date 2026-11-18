// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 8

// DestroyObject @ 14e662f00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FBackPingCommand,1>::
DestroyObject(TIntrusiveReferenceController<UE::Interchange::FBackPingCommand,1> *this)

{
  return;
}

// DestroyObject @ 14e662f10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Interchange::FCompletedQueryTaskProgressCommand,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Interchange::FCompletedQueryTaskProgressCommand,1>
           *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
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

// DestroyObject @ 14e662f30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FCompletedTaskCommand,1>::
DestroyObject(TIntrusiveReferenceController<UE::Interchange::FCompletedTaskCommand,1> *this)

{
  void *pvVar1;
  
  DestructItems<FString,int>
            (*(FString **)((this->ObjectStorage).Pad + 0x20),
             *(int *)((this->ObjectStorage).Pad + 0x28));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e662f80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FErrorCommand,1>::
DestroyObject(TIntrusiveReferenceController<UE::Interchange::FErrorCommand,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
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

// DestroyObject @ 14e662fa0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FPingCommand,1>::
DestroyObject(TIntrusiveReferenceController<UE::Interchange::FPingCommand,1> *this)

{
  return;
}

// DestroyObject @ 14e662fb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FQueryTaskProgressCommand,1>
::DestroyObject(TIntrusiveReferenceController<UE::Interchange::FQueryTaskProgressCommand,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
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

// DestroyObject @ 14e662fd0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FRunTaskCommand,1>::
DestroyObject(TIntrusiveReferenceController<UE::Interchange::FRunTaskCommand,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
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

// DestroyObject @ 14e662ff0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FTerminateCommand,1>::
DestroyObject(TIntrusiveReferenceController<UE::Interchange::FTerminateCommand,1> *this)

{
  return;
}

