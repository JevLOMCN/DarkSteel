// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 20

// Destruct @ 1445c84e0

void __cdecl UE::Core::Private::TDestructorCaller<void_*>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1445c84f0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::IoStore::FCasSnapshot>::Destruct(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 1445c8530

void __cdecl
UE::Core::Private::TDestructorCaller<UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag>::
Destruct(void *param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)param_1 + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0x30);
    if (*(longlong **)((longlong)param_1 + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x0001445c8549. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1445c8560

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError>::FEmptyType>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 1445c8570

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TSharedPtr<IAsyncReadFileHandle,1>,FFileSystemError>::FEmptyType>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 1445c8580

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 1445c8590

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FEmptyType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1445c85a0

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<__int64,UE::UnifiedError::FError>::FEmptyType>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 1445c85b0

void __cdecl
UE::Core::Private::
TDestructorCaller<UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>::Destruct
          (void *param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0x10);
    if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001445c85c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1445c85e0

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::TDestructorCaller<UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall>::
Destruct(void *param_1)

{
  longlong *plVar1;
  
  if (*(void **)((longlong)param_1 + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd0));
  }
  DestructItems<UE::IoStore::Private::FResolvedContainerChunks,int>
            (*(FResolvedContainerChunks **)((longlong)param_1 + 0xc0),
             *(int *)((longlong)param_1 + 200));
  if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xc0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb8));
  if (*(longlong *)((longlong)param_1 + 0x80) != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0x90);
    if (*(longlong **)((longlong)param_1 + 0xa8) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0xa8);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)((longlong)param_1 + 0x50) != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0x60);
    if (*(longlong **)((longlong)param_1 + 0x78) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0x78);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  IoStore::FOnDemandInstallArgs::~FOnDemandInstallArgs(param_1);
  return;
}

// Destruct @ 1445c85f0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge>::
Destruct(void *param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)param_1 + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0x30);
    if (*(longlong **)((longlong)param_1 + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x0001445c8609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1445c8620

void __cdecl
UE::Core::Private::TDestructorCaller<UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify>::
Destruct(void *param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0x10);
    if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001445c8638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1445c8650

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError>::FWrapErrorType>
::Destruct(void *param_1)

{
  longlong *plVar1;
  
  *(undefined8 *)param_1 = 0;
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445c8682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1445c86a0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TSharedPtr<IAsyncReadFileHandle,1>,FFileSystemError>::FWrapErrorType>
::Destruct(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
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

// Destruct @ 1445c86c0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType>
::Destruct(void *param_1)

{
  longlong *plVar1;
  
  *(undefined8 *)param_1 = 0;
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445c86f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1445c8710

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FWrapErrorType>
::Destruct(void *param_1)

{
  longlong *plVar1;
  
  *(undefined8 *)param_1 = 0;
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445c8742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1445c8760

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<__int64,UE::UnifiedError::FError>::FWrapErrorType>::Destruct
          (void *param_1)

{
  longlong *plVar1;
  
  *(undefined8 *)param_1 = 0;
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445c8792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1445c87b0

void __cdecl
UE::Core::Private::TDestructorCaller<TSharedPtr<IAsyncReadFileHandle,1>_>::Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 1445c87c0

void __cdecl
UE::Core::Private::TDestructorCaller<TSharedPtr<IFileHandle,1>_>::Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 1445c87d0

void __cdecl UE::Core::Private::TDestructorCaller<UE::FIoHttpRequest>::Destruct(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)param_1 != 0) {
    if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)((longlong)*GHttpIoDispatcher.Object + 0x58))
              (GHttpIoDispatcher.Object,*(undefined8 *)param_1);
    *(undefined8 *)param_1 = 0;
  }
  return;
}

