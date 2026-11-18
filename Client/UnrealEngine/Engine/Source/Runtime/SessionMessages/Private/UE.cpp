// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionMessages
// Functions: 16

// Construct<FSessionServicePing> @ 148ce7c10

void __cdecl UE::CoreUObject::Private::Construct<FSessionServicePing>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FSessionServicePing> @ 148ce7c20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSessionServicePing>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FSessionServicePing> @ 148ce7c30

void __cdecl UE::CoreUObject::Private::Destruct<FSessionServicePing>(void *param_1)

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

// Copy<FSessionServicePing> @ 148ce7c50

bool __cdecl
UE::CoreUObject::Private::Copy<FSessionServicePing>(void *param_1,void *param_2,int param_3)

{
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      ::FString::operator=
                (this,(FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSessionServiceLogUnsubscribe> @ 148ce7ff0

void __cdecl UE::CoreUObject::Private::Construct<FSessionServiceLogUnsubscribe>(void *param_1)

{
  return;
}

// ConstructForTests<FSessionServiceLogUnsubscribe> @ 148ce8000

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSessionServiceLogUnsubscribe>(void *param_1)

{
  return;
}

// Construct<FSessionServiceLogSubscribe> @ 148ce8010

void __cdecl UE::CoreUObject::Private::Construct<FSessionServiceLogSubscribe>(void *param_1)

{
  return;
}

// ConstructForTests<FSessionServiceLogSubscribe> @ 148ce8020

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSessionServiceLogSubscribe>(void *param_1)

{
  return;
}

// Construct<FSessionServiceLog> @ 148ce8030

void __cdecl UE::CoreUObject::Private::Construct<FSessionServiceLog>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FSessionServiceLog> @ 148ce8060

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSessionServiceLog>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FSessionServiceLog> @ 148ce8090

void __cdecl UE::CoreUObject::Private::Destruct<FSessionServiceLog>(void *param_1)

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

// Copy<FSessionServiceLog> @ 148ce80b0

bool __cdecl
UE::CoreUObject::Private::Copy<FSessionServiceLog>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_1 + lVar2 + 8));
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x28);
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_1 + lVar2 + 0x30);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x38);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSessionServicePong> @ 148ce8150

void __cdecl UE::CoreUObject::Private::Construct<FSessionServicePong>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x89) = 0;
  *(undefined2 *)((longlong)param_1 + 0x8d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8f) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined1 *)((longlong)param_1 + 0x88) = 1;
  return;
}

// ConstructForTests<FSessionServicePong> @ 148ce81d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSessionServicePong>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined1 *)((longlong)param_1 + 0x88) = 1;
  return;
}

// Destruct<FSessionServicePong> @ 148ce8230

void __cdecl UE::CoreUObject::Private::Destruct<FSessionServicePong>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
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

// Copy<FSessionServicePong> @ 148ce8240

bool __cdecl
UE::CoreUObject::Private::Copy<FSessionServicePong>(void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar3);
      ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x38),(FString *)((longlong)param_2 + 0x38));
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x48),(FString *)((longlong)param_2 + 0x48));
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x58) = *(undefined8 *)((longlong)param_2 + 0x58);
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x68),(FString *)((longlong)param_2 + 0x68));
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x78),(FString *)((longlong)param_2 + 0x78));
      puVar1 = (undefined1 *)((longlong)param_2 + 0x88);
      param_2 = (void *)((longlong)param_2 + 0x90);
      *(undefined1 *)((longlong)param_1 + 0x88) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x90);
    } while (param_3 != 0);
  }
  return true;
}

