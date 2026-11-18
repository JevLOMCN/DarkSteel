// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 13

// Destruct @ 148bc7d90

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<FInstallBundleCombinedInstallState,enum_EInstallBundleResult>::FEmptyType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 148bc7da0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<FInstallBundleReleaseRequestInfo,enum_EInstallBundleResult>::FEmptyType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 148bc7db0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<FInstallBundleRequestInfo,enum_EInstallBundleResult>::FEmptyType>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 148bc7dc0

void __cdecl
UE::Core::Private::TDestructorCaller<FInstallBundleCombinedInstallState>::Destruct(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x50));
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,enum_EInstallBundleInstallState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,enum_EInstallBundleInstallState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Destruct @ 148bc7e20

void __cdecl
UE::Core::Private::TDestructorCaller<FInstallBundleReleaseRequestInfo>::Destruct(void *param_1)

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

// Destruct @ 148bc7e40

void __cdecl
UE::Core::Private::TDestructorCaller<FInstallBundleRequestInfo>::Destruct(void *param_1)

{
  DestructItems<FInstallBundleRequestResultInfo,int>
            (*(FInstallBundleRequestResultInfo **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Destruct @ 148bc7e90

void __cdecl
UE::Core::Private::TDestructorCaller<FInstallBundleReport::FStateInstalling>::Destruct
          (void *param_1)

{
  *(undefined ***)param_1 = &___7FJsonSerializable__6B_;
  return;
}

// Destruct @ 148bc7ea0

void __cdecl
UE::Core::Private::TDestructorCaller<FInstallBundleReport::FStateUpdatable>::Destruct(void *param_1)

{
  *(undefined ***)param_1 = &___7FJsonSerializable__6B_;
  return;
}

// Destruct @ 148bc7eb0

void __cdecl
UE::Core::Private::TDestructorCaller<FInstallBundleReport::FStateUpdated>::Destruct(void *param_1)

{
  *(undefined ***)param_1 = &___7FJsonSerializable__6B_;
  return;
}

// Destruct @ 148bc7ec0

void __cdecl
UE::Core::Private::TDestructorCaller<FInstallBundleReport::FStateUpdating>::Destruct(void *param_1)

{
  *(undefined ***)param_1 = &___7FJsonSerializable__6B_;
  return;
}

// Destruct @ 148bc7ed0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<FInstallBundleCombinedInstallState,enum_EInstallBundleResult>::FWrapErrorType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 148bc7ee0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<FInstallBundleReleaseRequestInfo,enum_EInstallBundleResult>::FWrapErrorType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 148bc7ef0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<FInstallBundleRequestInfo,enum_EInstallBundleResult>::FWrapErrorType>
::Destruct(void *param_1)

{
  return;
}

