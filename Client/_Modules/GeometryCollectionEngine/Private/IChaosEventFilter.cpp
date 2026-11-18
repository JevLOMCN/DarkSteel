// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 8

// ~IChaosEventFilter<TArray<Chaos::FBreakingData,TSizedDefaultAllocator<32>_>,TArray<FChaosBreakingEventData,TSizedDefaultAllocator<32>_>,enum_EChaosBreakingSortMethod> @ 14635e600

void __thiscall
IChaosEventFilter<TArray<Chaos::FBreakingData,TSizedDefaultAllocator<32>_>,TArray<FChaosBreakingEventData,TSizedDefaultAllocator<32>_>,enum_EChaosBreakingSortMethod>
::
~IChaosEventFilter<TArray<Chaos::FBreakingData,TSizedDefaultAllocator<32>_>,TArray<FChaosBreakingEventData,TSizedDefaultAllocator<32>_>,enum_EChaosBreakingSortMethod>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__IChaosEventFilter_V__TArray_UFBreakingData_Chaos__V__TSizedDefaultAllocator__0CA_____V__TArray_UFChaosBreakingEventData__V__TSizedDefaultAllocator__0CA_____W4EChaosBreakingSortMethod____6B_
  ;
  pvVar1 = *(void **)((longlong)this + 0x10);
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

// ~IChaosEventFilter<TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32>_>,TArray<FChaosCollisionEventData,TSizedDefaultAllocator<32>_>,enum_EChaosCollisionSortMethod> @ 14635e620

void __thiscall
IChaosEventFilter<TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32>_>,TArray<FChaosCollisionEventData,TSizedDefaultAllocator<32>_>,enum_EChaosCollisionSortMethod>
::
~IChaosEventFilter<TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32>_>,TArray<FChaosCollisionEventData,TSizedDefaultAllocator<32>_>,enum_EChaosCollisionSortMethod>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__IChaosEventFilter_V__TArray_UFCollidingData_Chaos__V__TSizedDefaultAllocator__0CA_____V__TArray_UFChaosCollisionEventData__V__TSizedDefaultAllocator__0CA_____W4EChaosCollisionSortMethod____6B_
  ;
  pvVar1 = *(void **)((longlong)this + 0x10);
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

// ~IChaosEventFilter<TArray<Chaos::FRemovalData,TSizedDefaultAllocator<32>_>,TArray<FChaosRemovalEventData,TSizedDefaultAllocator<32>_>,enum_EChaosRemovalSortMethod> @ 14635e640

void __thiscall
IChaosEventFilter<TArray<Chaos::FRemovalData,TSizedDefaultAllocator<32>_>,TArray<FChaosRemovalEventData,TSizedDefaultAllocator<32>_>,enum_EChaosRemovalSortMethod>
::
~IChaosEventFilter<TArray<Chaos::FRemovalData,TSizedDefaultAllocator<32>_>,TArray<FChaosRemovalEventData,TSizedDefaultAllocator<32>_>,enum_EChaosRemovalSortMethod>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__IChaosEventFilter_V__TArray_UFRemovalData_Chaos__V__TSizedDefaultAllocator__0CA_____V__TArray_UFChaosRemovalEventData__V__TSizedDefaultAllocator__0CA_____W4EChaosRemovalSortMethod____6B_
  ;
  pvVar1 = *(void **)((longlong)this + 0x10);
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

// ~IChaosEventFilter<TArray<Chaos::FTrailingData,TSizedDefaultAllocator<32>_>,TArray<FChaosTrailingEventData,TSizedDefaultAllocator<32>_>,enum_EChaosTrailingSortMethod> @ 14635e660

void __thiscall
IChaosEventFilter<TArray<Chaos::FTrailingData,TSizedDefaultAllocator<32>_>,TArray<FChaosTrailingEventData,TSizedDefaultAllocator<32>_>,enum_EChaosTrailingSortMethod>
::
~IChaosEventFilter<TArray<Chaos::FTrailingData,TSizedDefaultAllocator<32>_>,TArray<FChaosTrailingEventData,TSizedDefaultAllocator<32>_>,enum_EChaosTrailingSortMethod>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__IChaosEventFilter_V__TArray_UFTrailingData_Chaos__V__TSizedDefaultAllocator__0CA_____V__TArray_UFChaosTrailingEventData__V__TSizedDefaultAllocator__0CA_____W4EChaosTrailingSortMethod____6B_
  ;
  pvVar1 = *(void **)((longlong)this + 0x10);
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

// FilterEvents @ 1463712a0

void __thiscall
IChaosEventFilter<TArray<Chaos::FBreakingData,TSizedDefaultAllocator<32>_>,TArray<FChaosBreakingEventData,TSizedDefaultAllocator<32>_>,enum_EChaosBreakingSortMethod>
::FilterEvents(void *this,TArray<Chaos::FBreakingData,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// FilterEvents @ 1463712b0

void __thiscall
IChaosEventFilter<TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32>_>,TArray<FChaosCollisionEventData,TSizedDefaultAllocator<32>_>,enum_EChaosCollisionSortMethod>
::FilterEvents(void *this,TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// FilterEvents @ 1463712c0

void __thiscall
IChaosEventFilter<TArray<Chaos::FRemovalData,TSizedDefaultAllocator<32>_>,TArray<FChaosRemovalEventData,TSizedDefaultAllocator<32>_>,enum_EChaosRemovalSortMethod>
::FilterEvents(void *this,TArray<Chaos::FRemovalData,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// FilterEvents @ 1463712d0

void __thiscall
IChaosEventFilter<TArray<Chaos::FTrailingData,TSizedDefaultAllocator<32>_>,TArray<FChaosTrailingEventData,TSizedDefaultAllocator<32>_>,enum_EChaosTrailingSortMethod>
::FilterEvents(void *this,TArray<Chaos::FTrailingData,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

