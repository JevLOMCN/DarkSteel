// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// Destruct @ 149d47e10

void __cdecl UE::Core::Private::TDestructorCaller<TSoftObjectPtr<UObject>_>::Destruct(void *param_1)

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

// Destruct @ 149d47e30

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TSoftObjectPtr<UObject>,enum_EPropertyBagResult>::FEmptyType>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 149d47e40

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<FSoftClassPath,enum_EPropertyBagResult>::FEmptyType>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 149d47e50

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TSoftClassPtr<UObject>,enum_EPropertyBagResult>::FEmptyType>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 149d47e60

void __cdecl UE::Core::Private::TDestructorCaller<FSoftClassPath>::Destruct(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
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

// Destruct @ 149d47e80

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TSoftObjectPtr<UObject>,enum_EPropertyBagResult>::FWrapErrorType>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 149d47e90

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<FSoftClassPath,enum_EPropertyBagResult>::FWrapErrorType>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 149d47ea0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TSoftClassPtr<UObject>,enum_EPropertyBagResult>::FWrapErrorType>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 149d47eb0

void __cdecl UE::Core::Private::TDestructorCaller<TSoftClassPtr<UObject>_>::Destruct(void *param_1)

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

