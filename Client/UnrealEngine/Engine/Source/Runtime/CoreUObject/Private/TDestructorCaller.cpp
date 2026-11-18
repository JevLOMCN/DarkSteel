// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// Destruct @ 141f2d2c0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::DerivedData::Private::FIoCookedState>::Destruct
          (void *param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  BufCore *this;
  void *pvVar5;
  void *pvVar6;
  longlong *plVar7;
  
  lVar4 = *(longlong *)param_1;
  if (lVar4 == 0) {
    return;
  }
  LOCK();
  piVar2 = (int *)(lVar4 + 0xd0);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    piVar2 = *(int **)(lVar4 + 0x70);
    if (*(longlong *)(lVar4 + 0xa0) != 0) {
      plVar7 = (longlong *)(lVar4 + 0xb0);
      if (*(longlong **)(lVar4 + 200) != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar4 + 200);
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if ((*(char *)(lVar4 + 0x98) != '\0') &&
       (this = *(BufCore **)(lVar4 + 0x90), this != (BufCore *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount(this);
      LOCK();
      piVar1 = &this->NumRefs;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FIoBuffer::BufCore::~BufCore(this);
        ::operator_delete(this,0x20);
      }
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(piVar2 + 8);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(piVar2 + 4);
    piVar2[6] = piVar2[6] + -1;
    *(longlong *)(piVar2 + 4) = lVar4;
    LeaveCriticalSection(lpCriticalSection);
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      pvVar6 = *(void **)(piVar2 + 2);
      while (pvVar6 != (void *)0x0) {
        pvVar5 = *(void **)((longlong)pvVar6 + 0xf0000);
        ::operator_delete(pvVar6,0xf0010);
        pvVar6 = pvVar5;
      }
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
      piVar2[6] = 0;
      DeleteCriticalSection(lpCriticalSection);
      ::operator_delete(piVar2,0x48);
    }
  }
  return;
}

// Destruct @ 141f2d2d0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::DerivedData::Private::FIoEditorState>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 141f79490

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<FSoftObjectPath,enum_EPropertyBagResult>::FEmptyType>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 141f794a0

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<FString,enum_EPropertyBagResult>::FEmptyType>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 141f794b0

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<FText,enum_EPropertyBagResult>::FEmptyType>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 141f794c0

void __cdecl UE::Core::Private::TDestructorCaller<FSoftObjectPath>::Destruct(void *param_1)

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

// Destruct @ 141f794e0

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<FSoftObjectPath,enum_EPropertyBagResult>::FWrapErrorType>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 141f794f0

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<FString,enum_EPropertyBagResult>::FWrapErrorType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 141f79500

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<FText,enum_EPropertyBagResult>::FWrapErrorType>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 141f79510

void __cdecl UE::Core::Private::TDestructorCaller<FText>::Destruct(void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141f7951b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

