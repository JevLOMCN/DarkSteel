// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 15

// Destruct @ 147212710

void __cdecl
UE::Core::Private::
TDestructorCaller<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
::Destruct(void *param_1)

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

// Destruct @ 147212730

void __cdecl
UE::Core::Private::
TDestructorCaller<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>::
Destruct(void *param_1)

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

// Destruct @ 147212750

void __cdecl
UE::Core::Private::
TDestructorCaller<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 147212760

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Mass::FEmptyTypeTraits>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 147212770

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Mass::FEntityCollection>::Destruct(void *param_1)

{
  DestructItems<FMassArchetypeEntityCollection,int>
            (*(FMassArchetypeEntityCollection **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 1472127c0

void __cdecl
UE::Core::Private::TDestructorCaller<FMassArchetypeCompositionDescriptor>::Destruct(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Destruct @ 147212830

void __cdecl UE::Core::Private::TDestructorCaller<FMassEntityHandle>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 147212840

void __cdecl
UE::Core::Private::TDestructorCaller<FMassFragmentRequirements>::Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x268));
  if (*(void **)((longlong)param_1 + 0x250) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x250));
  }
  if (*(void **)((longlong)param_1 + 0x230) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x230));
  }
  if (*(void **)((longlong)param_1 + 0x210) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x210));
  }
  if (*(void **)((longlong)param_1 + 0x1f0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1f0));
  }
  if (*(void **)((longlong)param_1 + 0x1d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1d0));
  }
  if (*(void **)((longlong)param_1 + 0x1b0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1b0));
  }
  if (*(void **)((longlong)param_1 + 400) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 400));
  }
  if (*(void **)((longlong)param_1 + 0x170) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x170));
  }
  if (*(void **)((longlong)param_1 + 0x150) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x150));
  }
  if (*(void **)((longlong)param_1 + 0x130) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x130));
  }
  if (*(void **)((longlong)param_1 + 0x110) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x110));
  }
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  if (*(void **)((longlong)param_1 + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd0));
  }
  if (*(void **)((longlong)param_1 + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb0));
  }
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 147212850

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Mass::Relations::FRelationTypeTraits>::Destruct
          (void *param_1)

{
  longlong *plVar1;
  
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  if (*(longlong *)((longlong)param_1 + 0x50) != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0x60);
    if (*(longlong **)((longlong)param_1 + 0x78) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0x78);
    }
                    /* WARNING: Could not recover jumptable at 0x000147212888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1472128a0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Mass::FSharedFragmentTypeTraits>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1472128b0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Mass::FSubsystemTypeTraits>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1472128c0

void __cdecl
UE::Core::Private::TDestructorCaller<TObjectKey<UMassProcessor_const_>_>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1472128d0

void __cdecl
UE::Core::Private::TDestructorCaller<TObjectKey<UScriptStruct_const_>_>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1472128e0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Mass::FConcurrentEntityStorage>::Destruct(void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  
  *(undefined ***)param_1 = &___7FConcurrentEntityStorage_Mass_UE__6B_;
  if (*(longlong *)((longlong)param_1 + 0x20) != 0) {
    uVar2 = 0;
    if (*(int *)((longlong)param_1 + 0x18) != 0) {
      do {
        lVar1 = uVar2 * 8;
        FMemory::Free(*(void **)(lVar1 + *(longlong *)((longlong)param_1 + 0x20)));
        uVar3 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar3;
        *(undefined8 *)(lVar1 + *(longlong *)((longlong)param_1 + 0x20)) = 0;
      } while (uVar3 < *(uint *)((longlong)param_1 + 0x18));
    }
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
    *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  }
  if (*(void **)((longlong)param_1 + 0x28) == (void *)0x0) {
    return;
  }
  FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  return;
}

// Destruct @ 1472128f0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Mass::FSingleThreadedEntityStorage>::Destruct
          (void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  TIndirectArray<TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty((TIndirectArray<TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *)((longlong)param_1 + 0x10),0);
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

