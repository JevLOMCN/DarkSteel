// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 11

// Construct<FNamedInterface> @ 14eb230c0

void __cdecl UE::CoreUObject::Private::Construct<FNamedInterface>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FNamedInterface> @ 14eb23180

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNamedInterface>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FNamedInterface> @ 14eb23190

void __cdecl UE::CoreUObject::Private::Destruct<FNamedInterface>(void *param_1)

{
  return;
}

// Copy<FNamedInterface> @ 14eb231a0

bool __cdecl
UE::CoreUObject::Private::Copy<FNamedInterface>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNamedInterfaceDef> @ 14eb26280

void __cdecl UE::CoreUObject::Private::Construct<FNamedInterfaceDef>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FNamedInterfaceDef> @ 14eb262a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNamedInterfaceDef>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FNamedInterfaceDef> @ 14eb262c0

void __cdecl UE::CoreUObject::Private::Destruct<FNamedInterfaceDef>(void *param_1)

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

// Copy<FNamedInterfaceDef> @ 14eb262e0

bool __cdecl
UE::CoreUObject::Private::Copy<FNamedInterfaceDef>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      ::FString::operator=
                ((FString *)(puVar1 + 1),
                 (FString *)((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FAutomationSpecBase::FAsyncUntilDoneLatentCommand,FAutomationSpecBase::FAsyncUntilDoneLatentCommand_*_&> @ 14eb28ce0

FAsyncUntilDoneLatentCommand * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FAutomationSpecBase::FAsyncUntilDoneLatentCommand,FAutomationSpecBase::FAsyncUntilDoneLatentCommand_*_&>
          (FAsyncUntilDoneLatentCommand **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FOnlineSubsystemImpl,FOnlineSubsystemImpl_*_&> @ 14eb28d00

FOnlineSubsystemImpl * __cdecl
UE::Core::Private::DereferenceIfNecessary<FOnlineSubsystemImpl,FOnlineSubsystemImpl_*_&>
          (FOnlineSubsystemImpl **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FAutomationSpecBase::FUntilDoneLatentCommand,FAutomationSpecBase::FUntilDoneLatentCommand_*_&> @ 14eb28d20

FUntilDoneLatentCommand * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FAutomationSpecBase::FUntilDoneLatentCommand,FAutomationSpecBase::FUntilDoneLatentCommand_*_&>
          (FUntilDoneLatentCommand **param_1)

{
  return *param_1;
}

